%%
%---------------------------------------------------------------------------------------------%
%----------------------------------------生成数据---------------------------------------------%
%---------------------------------------------------------------------------------------------%
rng(1234)%设置种子数为123
simulation_size = 1;%模拟总次数
sample_size = 240;%1次模拟的样本数　240
col_size = 10;%矩阵变量x的列数　10
row_size = 10;%矩阵变量的行数　 12
rou = 0.6;%协方差自相关参数
sigma_col = zeros(col_size,col_size)*nan;%创建空的列协方差矩阵
sigma_row = zeros(row_size,row_size)*nan;%创建空的行协方差矩阵
%自相关方式创建列协方差阵
for i = 1:col_size
    for j = 1:col_size
        sigma_col(i,j) = rou^(abs(i-j));       
    end
end
%自相关方式创建行协方差阵
for i = 1:row_size
    for j = 1:row_size
        sigma_row(i,j) = rou^(abs(i-j));       
    end
end
%带状结构创建列协方差阵B1
sigma_col = zeros(col_size,col_size);%创建空的列协方差矩阵
for i = 1:col_size
    for j = 1:col_size
        if i==j
            sigma_col(i,j) = 1;
         elseif abs(i-j)==1
            sigma_col(i,j) = 0.25;
        end
    end
end
%带状结构创建行协方差阵B1
sigma_row = zeros(row_size,row_size);%创建空的行协方差矩阵
for i = 1:row_size
    for j = 1:row_size
        if i==j
            sigma_row(i,j) = 1;
        elseif abs(i-j)==1
            sigma_row(i,j) = 0.25;
        end
    end
end
%带状结构创建列协方差阵B2
sigma_col = zeros(col_size,col_size);%创建空的列协方差矩阵
for i = 1:col_size
    for j = 1:col_size
        if i==j
            sigma_col(i,j) = 1;
        elseif abs(i-j)==1
            sigma_col(i,j) = 0.5;

        elseif abs(i-j) == 2
            sigma_col(i,j) = 0.25;
        end
    end
end
%带状结构创建行协方差阵B2
sigma_row = zeros(row_size,row_size);%创建空的行协方差矩阵
for i = 1:row_size
    for j = 1:row_size
        if i==j
            sigma_row(i,j) = 1;
        elseif abs(i-j)==1
            sigma_row(i,j) = 0.5;
        elseif abs(i-j) == 2
            sigma_row(i,j) = 0.25;
        end
    end
end
            
sigma = kron(sigma_col,sigma_row);%求得矩阵变量的协方差阵（pq*pq）
[sigma_vec,sigma_value] = eig(sigma);%对协方差阵进行特征分解
sigma_sef = sigma_vec*sqrt(sigma_value);%将协方差阵分解成正交矩阵跟其转置的乘积
Data_x = zeros(row_size,col_size,sample_size,simulation_size)*nan;%创建矩阵x(100次模拟，每次模拟100个矩阵样本)
for j = 1:simulation_size
    for i = 1:sample_size
        Data_x(:,:,i,j) = reshape(sigma_sef*randn(col_size*row_size,1),row_size,col_size);
    end
end

mu = 1; 

beta_real_part1 = repmat(-mu*ones(row_size,1),(1/4)*sample_size,1);
beta_real_part2 = repmat(mu*ones(row_size,1),(1/2)*sample_size,1);
beta_real_part3 = repmat([-0.5*mu;0.5*mu*ones((row_size-1),1)],(1/4)*sample_size,1);
gamma_real_part1 = repmat([ones(col_size,1)],(1/4)*sample_size,1);
gamma_real_part2 = repmat([ones(col_size,1)],(1/2)*sample_size,1);
gamma_real_part3 = repmat([ones(col_size,1)],(1/4)*sample_size,1);

beta_real = [beta_real_part1;beta_real_part2;beta_real_part3];%%%%%%%%%%%3组
gamma_real = [gamma_real_part1;gamma_real_part2;gamma_real_part3];%%%%%%%%%%%%%%%3组

epsilon = 0.5*randn(sample_size,simulation_size);%创建误差epsilon
y_real = zeros(sample_size,simulation_size)*nan;%创建真实的y_real
for i = 1:simulation_size
    for j = 1:sample_size
        y_real(j,i) = beta_real(((j-1)*row_size+1):j*row_size)'*Data_x(:,:,j,i)*gamma_real(((j-1)*col_size+1):(j*col_size))+epsilon(j,i);
    end
end

%第i次模拟时需要的数据取出
yangbencishu = 1;%抽第i次
y = y_real(:,yangbencishu);%-mean(y_real(:,i));%将第1次模拟中心化后的y抽出来记为y
x = Data_x(:,:,:,yangbencishu);%将第1次模拟的矩阵变量抽出来记为x（维度为p*q*n）
%x = x - mean(x,3);
beta_real;
gamma_real;

c1 = sqrt((sqrt(row_size)/sqrt(col_size))*(norm(gamma_real_part1)/norm(beta_real_part1)));
c2 = sqrt((sqrt(row_size)/sqrt(col_size))*(norm(gamma_real_part2)/norm(beta_real_part2)));
c3 = sqrt((sqrt(row_size)/sqrt(col_size))*(norm(gamma_real_part3)/norm(beta_real_part3)));
beta_real_part1 = beta_real_part1*c1;
beta_real_part2 = beta_real_part2*c2;
beta_real_part3 = beta_real_part3*c3;
gamma_real_part1 = gamma_real_part1/c1;
gamma_real_part2 = gamma_real_part2/c2;
gamma_real_part3 = gamma_real_part3/c3;
beta_real = [beta_real_part1;beta_real_part2;beta_real_part3];
gamma_real = [gamma_real_part1;gamma_real_part2;gamma_real_part3];
%% 子程序调试
%---------------------------------------------------------------------------------------------%
%----------------------------------------开始求解---------------------------------------------%
%---------------------------------------------------------------------------------------------%
%----------------------------------------初值设定---------------------------------------------%
tic
k = 10;%ADMM中的惩罚参数
lambda = 0.38;%MCP中的惩罚参数0.4一致
a = 3;%MCP中的惩罚参数
%num_partitions = 6;%随机分成多少组
eps_initial = 1e-3;%对数似然函数收敛条件1e-5
eps_out = 1e-3;%初值算法收敛条件1e-8
iter_max_initial_in = 10;%迭代最大步数500
iter_max_initial_out = 10;%迭代最大步数500
num_partitions_list = 6:8;%(4:10)
combine_principle_list = linspace(0.1, 0.5, 3)*sample_size;
split_principle_list = linspace(0.6, 0.6, 1)*sample_size;
random_number_list = 1:50;
disp_if = 1;
[beta0, gamma0, partitions, result] = k_means_regression_initial(num_partitions_list, eps_initial, eps_out,...
                                                            iter_max_initial_in, iter_max_initial_out, combine_principle_list,...
                                                    split_principle_list, random_number_list, sample_size, row_size, col_size,...
                                                    x, y, disp_if, beta_real, gamma_real);
toc
%% 子程序调试
y = y_real(:,yangbencishu)-mean(y_real(:,yangbencishu));%将第1次模拟中心化后的y抽出来记为y
x = Data_x(:,:,:,yangbencishu);%将第1次模拟的矩阵变量抽出来记为x（维度为p*q*n）
x = x - mean(x,3);
beta = beta0;
gamma = gamma0;
v = zeros(sample_size,sample_size,row_size)*nan;
w = zeros(sample_size,sample_size,col_size)*nan;
for i = 1:(sample_size-1)
    for j = i+1:sample_size
        v(i,j,:) = beta(((i-1)*row_size+1):(i*row_size)) - beta(((j-1)*row_size+1):(j*row_size));
        w(i,j,:) = gamma(((i-1)*col_size+1):(i*col_size)) - gamma(((j-1)*col_size+1):(j*col_size));
    end
end
kesai = zeros(sample_size,sample_size,row_size);
yita = zeros(sample_size,sample_size,col_size);
v_vec = zeros(sample_size*(sample_size-1)*0.5*row_size,1);
w_vec = zeros(sample_size*(sample_size-1)*0.5*col_size,1);
v_vec_bar = zeros(sample_size*(sample_size-1)*0.5*row_size,1);
w_vec_bar = zeros(sample_size*(sample_size-1)*0.5*col_size,1);
u_vec = [v_vec;w_vec];
u_vec_bar = [v_vec_bar;w_vec_bar];
%v_vector中关于beta第ij系数差的范围(((((2*sample_size-i)*(i-1)/2+(j-i))-1)*row_size)+1):((((2*sample_size-i)*(i-1)/2)+(j-i))*row_size)
%w_vector中关于gamma第ij系数差的范围(((((2*sample_size-i)*(i-1)/2+(j-i))-1)*col_size)+1):((((2*sample_size-i)*(i-1)/2)+(j-i))*col_size)
for i = 1:(sample_size-1)
    for j = (i+1):(sample_size)
        v_vec((((((2*sample_size-i)*(i-1)/2+(j-i))-1)*row_size)+1):((((2*sample_size-i)*(i-1)/2)+(j-i))*row_size)) = v(i,j,:);
        w_vec((((((2*sample_size-i)*(i-1)/2+(j-i))-1)*col_size)+1):((((2*sample_size-i)*(i-1)/2)+(j-i))*col_size)) = w(i,j,:);
    end
end
kesai_vec = zeros((sample_size*(sample_size-1)*0.5*row_size),1);
yita_vec = zeros((sample_size*(sample_size-1)*0.5*col_size),1);
for i = 1:(sample_size-1)
    for j = (i+1):sample_size
        kesai_vec((((((2*sample_size-i)*(i-1)/2+(j-i))-1)*row_size)+1):((((2*sample_size-i)*(i-1)/2)+(j-i))*row_size)) = kesai(i,j,:);
        yita_vec((((((2*sample_size-i)*(i-1)/2+(j-i))-1)*col_size)+1):((((2*sample_size-i)*(i-1)/2)+(j-i))*col_size)) = yita(i,j,:);
    end
end
store_beta = zeros(row_size,sample_size);
store_gamma = zeros(col_size,sample_size);
%E中第((2*sample_size-i)*(i-1)/2)+(j-i))行是1*sample_size关于ij的指示向量
E = zeros((sample_size*(sample_size-1)*0.5),sample_size);
for i = 1:(sample_size-1)
    for j = (i+1):sample_size
        e_i = zeros(sample_size,1);
        e_i(i) = 1;
        e_j = zeros(sample_size,1);
        e_j(j) = 1;
        E((((2*sample_size-i)*(i-1)/2)+(j-i)),:) = (e_i - e_j)';
    end
end
%H_p维度为（组合数*p）*(样本数*p)
%H_q维度为（组合数*q）*(样本数*q)
H_p = kron(E,eye(row_size));
H_q = kron(E,eye(col_size));
%将sample_size个x[:,:,sample_size]拼成一个大的对角块矩阵X(np*nq)
%先按照第三个维度转换成sample_size个元胞
x_cell = mat2cell(x,row_size,col_size,ones(1,sample_size));
X = blkdiag(x_cell{:});
one_vec_sample = ones(sample_size,1);
one_vec_row = ones(row_size,1);
one_vec_col = ones(col_size,1);
one_beta = kron(eye(sample_size),one_vec_row');
one_gamma = kron(eye(sample_size),one_vec_col');
D_gamma = one_gamma*diag(gamma);
D_beta = one_beta*diag(beta);
HH_p = H_p'*H_p;
HH_q = H_q'*H_q;
f1 = 0.5*norm(y-D_beta*X*gamma).^2+0.5*k*norm(H_p*beta-v_vec+kesai_vec/k).^2+0.5*k*norm(H_q*gamma-w_vec+yita_vec/k).^2;
iter_max1 = 50;%1000;
iter_max2 = 50;%2500;
iter_max3 = 50;%2500;
eps1 = 1e-3;%*sqrt(row_size+col_size);
eps2 = 1e-3;%*sqrt(sample_size*(row_size+col_size));
eps3 = 5e-4;%*sqrt(0.5*sample_size*(sample_size-1)*(row_size+col_size));5e-3
iter_max1_interval = 50;%1000;
iter_max2_interval = 50;%2500;
iter_max3_interval = 50;%50;
eps1_interval = 1e-3;%*sqrt(row_size+col_size);
eps2_interval = 1e-3;%*sqrt(sample_size*(row_size+col_size));
eps3_interval= 5e-4;%5e-3