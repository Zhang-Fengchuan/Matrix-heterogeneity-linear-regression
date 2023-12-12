function [beta_back,gamma_back,coefficients,...
    partitions,combine,residual_coefficients] = k_means_regression(num_partitions,eps_initial,eps_out,iter_max_initial_in,...
                                                iter_max_initial_out,combine_principle,split_principle,sample_size,row_size,col_size,x,y,random_number)
%-------------------------------------------函数功能-----------------------------------------------%
% （残差迭代模型）在给定输入参数的情况下利用残差迭代算法求解亚组分析的初值结果。

%-----------------------------------------输出变量说明---------------------------------------------%
% beta_back             残差迭代模型返回的行向量取值 [row_size*sample_size] matrix
% gamma_back            残差迭代模型返回的列向量取值 [col_size*sample_size] matrix
% coefficients          残差迭代模型返回的两个模型分别的回归系数值 [(row_size+col_size)*模型自动分的组数] matrix
% partitions            残差迭代模型返回的两个模型的分组索引（相对于原始的x、y的分组索引）[模型自动分的组数*1] cell 
% combine               残差迭代模型返回的两个模型对应的样本数量 [模型自动分的组数*1] matrix
% residual_coefficients 第 n 次与第 n-1 次样本重新划分后模型的系数差 [1*1] double
%-----------------------------------------输入变量说明---------------------------------------------%
% num_partitions        将数据分成几份
% eps_initial           每次进行同质模型回归时，每个模型收敛的精度
% iter_max_initial_in   每次进行同质模型回归时，交替优化的最大步数上限
% eps_out               第 n 次与第 n-1 次样本重新划分后模型的系数差精度，收敛精度
% iter_max_initial_out  样本重新划分的最大次数上限
% sample_size           样本量
% row_size              行向量维数
% col_size              列向量维数
% x                     一次模拟中的解释变量[row_size*col_size*sample_size]
% y                     一次模拟中的响应变量[sample_size*1]
% random_number         随机种子数，确保结果可重现
% combine_principle     c*sample_size; 最少元素个数组合并准则
% split_principle       c*sample_size; 最多元素个数分数准则



rng(random_number);
index = randperm(sample_size);
partition_lengths = [floor(sample_size / num_partitions) * ones(1, num_partitions - 1), sample_size - floor(sample_size / num_partitions) * (num_partitions - 1)];
partitions = cell(num_partitions,1);
%计算分组后的索引
start_idx = 1;
for i = 1:num_partitions
    end_idx = start_idx + partition_lengths(i) - 1;
    partitions{i} = index(start_idx:end_idx);
    start_idx = end_idx + 1;
end
for i = 1:num_partitions
    partitions{i} = sort(partitions{i});
end
partitions0 = partitions;
coefficients = zeros((row_size+col_size),num_partitions);%系数存储矩阵
residuals = zeros(sample_size,num_partitions);%残差存储矩阵
beta_back = zeros(sample_size*row_size,1);%返回初值结果
gamma_back = zeros(sample_size*col_size,1);%返回初值结果
beta_back0 = zeros(sample_size*row_size,1);%返回初值结果
gamma_back0 = zeros(sample_size*col_size,1);%返回初值结果
residual_coefficients = 1;
%初始值随机化机制
beta0 = rand(row_size,1);
gamma0 = (1/sqrt(col_size))*rand(col_size,1);
for i = 1:sample_size
    gamma0(1)=sqrt(1-sum(gamma0.^2));
end
for i = 1:num_partitions
   coefficients(:,i) = [beta0;gamma0]; 
end
coefficients0 = coefficients;%每次重新分配样本后回归时使用的初值，不使用warm start
iter_initial_out = 0;
while(residual_coefficients > eps_out&&iter_initial_out<=iter_max_initial_out)
for i = 1:num_partitions
    iter_initial_in = 0;
    n_part = length(partitions{i});
    if n_part < (0.05*sample_size)
        continue;
    end
    x_part = x(:,:,partitions{i})-mean(x(:,:,partitions{i}),3);
    y_part = y(partitions{i});
    beta0_part = coefficients0((1:row_size),i);
    gamma0_part = coefficients0(((row_size+1):end),i);
    sigma2 = (1/n_part)*(y_part-mean(y_part))'*(y_part-mean(y_part));
    sigma1 = sigma2;
    beta_part = beta0_part;
    gamma_part = gamma0_part;
    beta_likelihood = kron(eye(n_part),beta_part');
    x_likelihood = reshape(permute(x_part, [1,3,2]), row_size * n_part, col_size);
    log_likelihood0 = -0.5*log(det(sigma2))-0.5*log(det(sigma1))-0.5/(sigma1*sigma2)*(y_part-mean(y_part)-beta_likelihood*x_likelihood*gamma_part)'*...
                      (y_part-mean(y_part)-beta_likelihood*x_likelihood*gamma_part);
    log_likelihood = log_likelihood0 + 1;
    diff_loglikelihood = 1;
    C2 = zeros(1,row_size);
    C1 = zeros(1,col_size);
    M2 = zeros(row_size,row_size);
    M1 = zeros(col_size,col_size);
    mu = mean(y_part);
    while (diff_loglikelihood > eps_initial&&(iter_initial_in<=iter_max_initial_in))
        C2 = zeros(1,row_size);
        M2 = zeros(row_size,row_size);
        sigma1 = 0;
        for j = 1:n_part
            C2 = C2 + (((y_part(j)-mu)/sigma2)*gamma_part'*x_part(:,:,j)');
        end
        for j = 1:n_part
           M2 = M2 + ((x_part(:,:,j)*gamma_part)/sigma2)*(gamma_part'*x_part(:,:,j)');
        end
        beta_part = (C2*inv(M2))';%更新beta
        for j = 1:n_part
            sigma1 = sigma1 + (1/n_part)*((y_part(j)-mu-beta_part'*x_part(:,:,j)*gamma_part)/sigma2)*(y_part(j)-mu-beta_part'*x_part(:,:,j)*gamma_part)';
        end
        
        C1 = zeros(1,col_size);
        M1 = zeros(col_size,col_size);
        sigma2 = 0;
        for j = 1:n_part
            C1 = C1 + (((y_part(j)-mu)/sigma1)*beta_part'*x_part(:,:,j));
        end
        for j = 1:n_part
            M1 = M1 + ((x_part(:,:,j)'*beta_part)/sigma1)*(beta_part'*x_part(:,:,j));
        end
        gamma_part = (C1*inv(M1))';%更新gamma
        for j = 1:n_part
            sigma2 = sigma2 + (1/n_part)*((y_part(j)-mu-gamma_part'*x_part(:,:,j)'*beta_part)/sigma1)*(y_part(j)-mu-gamma_part'*x_part(:,:,j)'*beta_part)';
        end
        
        log_likelihood = -0.5*log(det(sigma2))-0.5*log(det(sigma1))-0.5/(sigma1*sigma2)*(y_part-mean(y_part)-beta_likelihood*x_likelihood*gamma_part)'*...
                     (y_part-mean(y_part)-beta_likelihood*x_likelihood*gamma_part);
        diff_loglikelihood = abs(log_likelihood-log_likelihood0);
        log_likelihood0 = log_likelihood;
        iter_initial_in = iter_initial_in + 1;
    end
    guiyi = sign(gamma_part(1))*sqrt((sqrt(row_size)/sqrt(col_size))*(norm(gamma_part)/norm(beta_part)));
    gamma_part = gamma_part/guiyi;
    beta_part = beta_part*guiyi;
    coefficients((1:row_size),i) = beta_part;%系数存储矩阵
    coefficients(((row_size+1):end),i) = gamma_part;%系数存储矩阵
    for k = 1:sample_size
        residuals(k,i) = abs(y(k)-beta_part'*(x(:,:,k)-mean(x(:,:,partitions{i}),3))*gamma_part-mean(y_part));%残差存储矩阵
    end
end
partitions = cell(num_partitions,1);
[~, min_col_indices] = min(residuals, [], 2);
for k = 1:sample_size
    for j = 1:num_partitions
        if min_col_indices(k)==j
            partitions{j} = [partitions{j},k];
        end
    end
end
combine = zeros(num_partitions,1);
for j = 1:num_partitions
    combine(j,1) = length(partitions{j});
end
combine_index = min(combine);
combine_min_index = find(combine==min(combine));
%合并机制
while (combine_index < combine_principle)
num_partitions = num_partitions - length(combine_min_index);
residuals(:,combine_min_index) = [];
coefficients(:,combine_min_index) = [];
partitions = cell(num_partitions,1);
[~, min_col_indices] = min(residuals, [], 2);
for k = 1:sample_size
    for j = 1:num_partitions
        if min_col_indices(k)==j
            partitions{j} = [partitions{j},k];
        end
    end
end
combine = zeros(num_partitions,1);
for j = 1:num_partitions
    combine(j,1) = length(partitions{j});
end
combine_index = min(combine);
combine_min_index = find(combine==min(combine));    
end
%分裂机制
split_index = max(combine);
split_max_index = find(combine==max(combine));
while (split_index > split_principle)
    num_partitions = num_partitions + length(split_max_index);
    residuals = [residuals,zeros(sample_size,length(split_max_index))];
    coefficients = [coefficients,zeros((row_size+col_size),length(split_max_index))];
    partitions = [partitions;cell(length(split_max_index),1)];
    for k = 1:length(split_max_index)
        partitions_old = cell(1,1);%设置开始划分的元胞
        partitions_old{1} = partitions{split_max_index(k)};
        sample_size_sum = sample_size;
        [beta_back,gamma_back,coefficients_split,...
            partitions_split,~,~] = k_means_regression_tree_single_mex(2,eps_initial,eps_out,iter_max_initial_in,...
            iter_max_initial_out,combine_principle,row_size,col_size,x,y,random_number,beta0,gamma0,partitions_old,sample_size_sum);
        partitions{split_max_index(k)} = partitions_split{1};
        partitions{num_partitions-length(split_max_index)+k} = partitions_split{2};
        coefficients(:,split_max_index(k)) = coefficients_split(:,1);
        coefficients(:,(num_partitions-length(split_max_index)+k)) = coefficients_split(:,2);
    end
    combine = zeros(num_partitions,1);
    for j = 1:num_partitions
        combine(j,1) = length(partitions{j});
    end
    split_index = max(combine);
    split_max_index = find(combine==max(combine));
end
iter_initial_out = iter_initial_out + 1;
for j = 1:num_partitions
   for k = 1:length(partitions{j})
       beta_back((((partitions{j}(k)-1)*row_size)+1):(partitions{j}(k)*row_size),:) = coefficients((1:row_size),j);
       gamma_back((((partitions{j}(k)-1)*col_size)+1):(partitions{j}(k)*col_size),:) = coefficients(((row_size+1):(row_size+col_size)),j);
   end
end
residual_coefficients = norm([beta_back;gamma_back]-[beta_back0;gamma_back0]);
beta_back0 = beta_back;%返回初值结果
gamma_back0 = gamma_back;%返回初值结果
end
end






