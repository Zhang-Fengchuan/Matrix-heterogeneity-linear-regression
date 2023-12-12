function [beta_back, gamma_back, diff_loglikelihood] = matrix_homogeneity_regression(x, y, partitions, sample_size, row_size, col_size, eps_initial, iter_max_initial_in)
num_partitions = length(partitions);
coefficients = zeros((row_size+col_size),num_partitions);
beta_back = zeros(sample_size*row_size,1);
gamma_back = zeros(sample_size*col_size,1);
beta_back0 = zeros(sample_size*row_size,1);
gamma_back0 = zeros(sample_size*col_size,1);
residual_coefficients = 1;
%初始值随机化机制
beta0 = rand(row_size,1);
gamma0 = (1/sqrt(col_size))*rand(col_size,1);
gamma0(1) = sqrt(1-sum(gamma0.^2));
gamma0 = gamma0/gamma0(1);
for i = 1:num_partitions
   coefficients(:,i) = [beta0;gamma0]; 
end
coefficients0 = coefficients;
%对每个分组的数据进行矩阵回归
for i = 1: num_partitions
    iter_initial_in = 0;
    n_part = length(partitions{i});
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
        beta_part = (C2*inv(M2))';%%更新beta
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
        gamma_part = (C1*inv(M1))';%%更新gamma
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
    coefficients((1:row_size),i) = beta_part;
    coefficients(((row_size+1):end),i) = gamma_part;
end
for j = 1:num_partitions
   for k = 1:length(partitions{j})
       beta_back((((partitions{j}(k)-1)*row_size)+1):(partitions{j}(k)*row_size),:) = coefficients((1:row_size),j);
       gamma_back((((partitions{j}(k)-1)*col_size)+1):(partitions{j}(k)*col_size),:) = coefficients(((row_size+1):(row_size+col_size)),j);
   end
end
end