//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// k_means_regression_tree_single.h
//
// Code generation for function 'k_means_regression_tree_single'
//

#pragma once

// Include files
#include "k_means_regression_tree_single_types.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void k_means_regression_tree_single(
    const emlrtStack *sp, real_T num_partitions, real_T eps_initial,
    real_T eps_out, real_T iter_max_initial_in, real_T iter_max_initial_out,
    real_T combine_principle, real_T row_size, real_T col_size,
    const coder::array<real_T, 3U> &x, const coder::array<real_T, 1U> &y,
    real_T random_number, const coder::array<real_T, 1U> &beta0,
    coder::array<real_T, 1U> &gamma0, const cell_wrap_0 partitions_old[1],
    real_T sample_size_sum, coder::array<real_T, 1U> &beta_back,
    coder::array<real_T, 1U> &gamma_back,
    coder::array<real_T, 2U> &coefficients,
    coder::array<cell_wrap_0, 1U> &partitions,
    coder::array<real_T, 1U> &combine, real_T *residual_coefficients);

// End of code generation (k_means_regression_tree_single.h)
