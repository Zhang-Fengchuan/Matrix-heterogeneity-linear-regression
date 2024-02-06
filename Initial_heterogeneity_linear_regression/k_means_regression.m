function [beta_back,gamma_back,coefficients,...
    partitions,combine,residual_coefficients] = k_means_regression(num_partitions,eps_initial,eps_out,iter_max_initial_in,...
                                                iter_max_initial_out,combine_principle,split_principle,sample_size,row_size,col_size,x,y,random_number)
%-------------------------------------------Functionality-----------------------------------------------%
% Use the residual iterative algorithm to calculate the initial results of the subcomponent analysis given the input parameters.
%-----------------------------------------Output Variable Description---------------------------------------------%
% beta_back             The residual iterative model returns a row vector with dimensions [row_size * sample_size]. matrix
% gamma_back            The residual iterative model returns a column vector with dimensions [col_size * sample_size]. matrix
% coefficients          The residual iterative model returns regression coefficients for two separate models, each with dimensions
%                       [(row_size + col_size) * number of groups automatically divided by the model] matrix
% partitions            The residual iterative model returns the group indices for the two models, relative to the original x and y group indices,
%                       with dimensions [number of groups automatically divided by the model * 1]. cell 
% combine               The residual iterative model returns the sample sizes corresponding to the two models,
%                       with dimensions [number of groups automatically divided by the model * 1]. matrix
% residual_coefficients The difference in model coefficients between the n-th iteration and the (n-1)-th iteration,
%                       after samples have been re-partitioned is represented as a scalar value, with dimensions [1 * 1]. double
%-----------------------------------------Input Variable Description---------------------------------------------%
% num_partitions        Divide the data into several parts
% eps_initial           The precision with which each model converges each time a homogeneous model regression is performed
% iter_max_initial_in   The maximum number of steps for alternating optimization is capped each time a homogeneous model regression is performed
% eps_out               The coefficient difference accuracy and convergence accuracy of the model after the n-th and (n-1)-th sample repartition
% iter_max_initial_out  The upper limit of the maximum number of sample division
% sample_size           sample size
% row_size              Row vector dimension
% col_size              Column vector dimension
% x                     Explanatory variables in a simulation[row_size*col_size*sample_size]
% y                     Response variable in a simulation[sample_size*1]
% random_number         Random seed count to ensure reproducible results
% combine_principle     c*sample_size; Minimum number of elements combination criteria
% split_principle       c*sample_size; Maximum number of elements score criteria



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
coefficients = zeros((row_size+col_size),num_partitions);%Coefficient storage matrix
residuals = zeros(sample_size,num_partitions);%Residual storage matrix
beta_back = zeros(sample_size*row_size,1);%Return the initial result
gamma_back = zeros(sample_size*col_size,1);%Return the initial result
beta_back0 = zeros(sample_size*row_size,1);%Return the initial result
gamma_back0 = zeros(sample_size*col_size,1);%Return the initial result
residual_coefficients = 1;
%Initial value randomization mechanism
beta0 = rand(row_size,1);
gamma0 = (1/sqrt(col_size))*rand(col_size,1);
for i = 1:sample_size
    gamma0(1)=sqrt(1-sum(gamma0.^2));
end
for i = 1:num_partitions
   coefficients(:,i) = [beta0;gamma0]; 
end
coefficients0 = coefficients;%The initial value used for regression after each redistribution of the sample, without warm start
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
        gamma_part = (C1*inv(M1))';%update gamma
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
    coefficients((1:row_size),i) = beta_part;%Coefficient storage matrix
    coefficients(((row_size+1):end),i) = gamma_part;%Coefficient storage matrix
    for k = 1:sample_size
        residuals(k,i) = abs(y(k)-beta_part'*(x(:,:,k)-mean(x(:,:,partitions{i}),3))*gamma_part-mean(y_part));%Residual storage matrix
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
%combine Aggregation
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
%split mechanism
split_index = max(combine);
split_max_index = find(combine==max(combine));
while (split_index > split_principle)
    num_partitions = num_partitions + length(split_max_index);
    residuals = [residuals,zeros(sample_size,length(split_max_index))];
    coefficients = [coefficients,zeros((row_size+col_size),length(split_max_index))];
    partitions = [partitions;cell(length(split_max_index),1)];
    for k = 1:length(split_max_index)
        partitions_old = cell(1,1);%Sets the cell to start partitioning
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
beta_back0 = beta_back;%Return the initial result
gamma_back0 = gamma_back;%Return the initial result
end
end






