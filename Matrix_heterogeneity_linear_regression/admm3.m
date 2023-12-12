function [beta_back,gamma_back,convergence]=admm3(sample_size,row_size,col_size,iter_max1,iter_max2,eps1,eps2,beta,gamma,H_p,H_q,X,y,k,v,...
                                             w,kesai,yita,v_vec,w_vec,kesai_vec,yita_vec,store_beta,store_gamma)
%-------------------------------------------函数功能-----------------------------------------------%
% 使用块坐标下降法和交替最小二乘法求解ADMM的第一部分目标函数
%----------------------------------------需要的前置函数---------------------------------------------%
% MATLAB Function:      无
%-----------------------------------------输出变量说明---------------------------------------------%
% beta_back             返回估计出的参数beta  [row_size*sample_size] matrix
% gamma_back            返回估计出的参数gamma [col_size*sample_size] matrix
% convergence           第 n 轮与第 n-1 轮坐标下降时系数差的二范数（考虑维度平均意义下的差值二范数）
%-----------------------------------------输入变量说明---------------------------------------------%
% sample_size           样本量
% row_size              行向量维数
% col_size              列向量维数
% iter_max1             内部最小二乘迭代的最大步数
% iter_max2             外部坐标下降的最大轮数
% eps1                  内部最小二乘迭代时两步系数差的二范数的容差
% eps2                  外部坐标下降时两轮系数差的二范数的容差
% beta                  初值beta
% gamma                 初值gamma
% H_p                   H_p维度为（组合数*p）*(样本数*p) matrix
% H_q                   H_q维度为（组合数*q）*(样本数*q) matrix
% X                     解释变量数据 （样本数*p）*(样本数*q) matrix
% y                     连续相应变量 （样本数*1）matrix
% k                     ADMM算法的惩罚参数
% v                     beta组合差信息储存矩阵（对偶变量）
% w                     gamma组合差信息储存矩阵（对偶变量）
% kesai　　　　　　　　　关于beta的增广lagrange乘子
% yita                  关于gamma的增广lagrange乘子
% v_vec                 beta组合差信息储存矩阵（对偶变量）按组合顺序拉成向量
% w_vec                 gamma组合差信息储存矩阵（对偶变量）按组合顺序拉成向量
% kesai_vec             beta的增广lagrange乘子按组合顺序拉成向量
% yita_vec              gamma的增广lagrange乘子按组合顺序拉成向量
% store_beta            内部最小二乘迭代时更新beta时用到的信息
% store_gamma           内部最小二乘迭代时更新gamma时用到的信息
store_beta = zeros(row_size,sample_size);%%%%%%%%%%%%%%%
store_gamma = zeros(col_size,sample_size);%%%%%%%%%%%%%%%%%
for i = 1:sample_size
   if i==1
      for j = 2:sample_size
          store_beta(:,i) = store_beta(:,i)+(squeeze(v(i,j,:)-kesai(i,j,:)/k));
          store_gamma(:,i) = store_gamma(:,i)+(squeeze(w(i,j,:)-yita(i,j,:)/k));
      end
   elseif i==sample_size
       for j = 1:(sample_size-1)
           store_beta(:,i) = store_beta(:,i)+(squeeze((kesai(j,i,:)/k)-v(j,i,:)));
           store_gamma(:,i) = store_gamma(:,i)+(squeeze((yita(j,i,:)/k)-w(j,i,:)));
       end
   else
       for j = 1:(i-1)
       store_beta(:,i) = store_beta(:,i)+(squeeze((kesai(j,i,:)/k)-v(j,i,:)));
       store_gamma(:,i) = store_gamma(:,i)+(squeeze((yita(j,i,:)/k)-w(j,i,:)));
       end
       for j = (i+1):sample_size
           store_beta(:,i) = store_beta(:,i)+(squeeze(v(i,j,:)-kesai(i,j,:)/k));
           store_gamma(:,i) = store_gamma(:,i)+(squeeze(w(i,j,:)-yita(i,j,:)/k));
       end
   end  
end
beta_re = reshape(beta,row_size,sample_size);
gamma_re = reshape(gamma,col_size,sample_size);
iter_2 = 0;
coef_diff_sum = 1;
while ((coef_diff_sum > eps2)&&(iter_2<=iter_max2))
beta_re_old = beta_re;
gamma_re_old = gamma_re;
    for i = 1:sample_size
        iter_1 = 0;
        coef_diff_1 = 1;
        e_i = ones(sample_size,1);
        e_i(i) = 0;
        beta_single_old = beta_re(:,i);
        gamma_single_old = gamma_re(:,i);
        while ((coef_diff_1 > eps1)&&(iter_1<=iter_max1))
              A = (X((((i-1)*row_size+1):(i*row_size)),(((i-1)*col_size+1):(i*col_size)))*gamma_re(:,i)*...
                              gamma_re(:,i)'*X((((i-1)*row_size+1):(i*row_size)),(((i-1)*col_size+1):(i*col_size)))'+k*(sample_size-1)*eye(row_size));
              D = diag(1./diag(A));
              beta_re(:,i) = D*((D*A*D)\(D*(X((((i-1)*row_size+1):(i*row_size)),(((i-1)*col_size+1):(i*col_size)))*gamma_re(:,i)*y(i)+k*store_beta(:,i)+k*beta_re*e_i)));
              B = (X((((i-1)*row_size+1):(i*row_size)),(((i-1)*col_size+1):(i*col_size)))'*beta_re(:,i)*...
                              beta_re(:,i)'*X((((i-1)*row_size+1):(i*row_size)),(((i-1)*col_size+1):(i*col_size)))+k*(sample_size-1)*eye(col_size));
              D = diag(1./diag(B));
              gamma_re(:,i) = D*((D*B*D)\(D*(X((((i-1)*row_size+1):(i*row_size)),(((i-1)*col_size+1):(i*col_size)))'*beta_re(:,i)*y(i)+k*store_gamma(:,i)+k*gamma_re*e_i)));
              index = sign(gamma_re(1,i))*sqrt((sqrt(row_size)/sqrt(col_size))*(norm(gamma_re(:,i))/norm(beta_re(:,i))));
              gamma_re(:,i) = gamma_re(:,i)/index;
              beta_re(:,i) = beta_re(:,i)*index;
              coef_diff_1 = norm([beta_re(:,i);gamma_re(:,i)]-[beta_single_old;gamma_single_old]);
              beta_single_old = beta_re(:,i);
              gamma_single_old = gamma_re(:,i);
              iter_1 = iter_1 + 1;
        end
    end
    coef_diff_sum = sqrt(sum(sum(([beta_re;gamma_re]-[beta_re_old;gamma_re_old]).^2))/(sample_size*(row_size+col_size)));
    beta_re_old = beta_re;
    gamma_re_old = gamma_re;
    iter_2 = iter_2 + 1;
end
beta_back = reshape(beta_re,row_size*sample_size,1);
gamma_back = reshape(gamma_re,col_size*sample_size,1);
convergence = coef_diff_sum;
end