%%
tic
[Result_table, Result_table_summary] = ORACLE(simulation_size, Data_x, y_real,...
            sample_size, row_size, col_size, beta_real, gamma_real, [], []);
toc
%%
tic
[Result_table, Result_table_summary] = RESPCLUST(simulation_size, Data_x, y_real,...
            sample_size, row_size, col_size, beta_real, gamma_real, [], [], [], [], []);
toc
%%
tic
[Result_table, Result_table_summary] = RESIDUAL(simulation_size, Data_x, y_real,...
            sample_size, row_size, col_size, beta_real, gamma_real, [], [], [], [], []);
toc
%%
tic
[Results,results,Results_opt,results_opt,...
  initial,Results_list_opt,Results_single_opt] = Matrix_heterogeneous_regression(simulation_size,Data_x,y_real,sample_size,row_size,col_size,beta_real,gamma_real,...
                                                               [],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[]);
toc