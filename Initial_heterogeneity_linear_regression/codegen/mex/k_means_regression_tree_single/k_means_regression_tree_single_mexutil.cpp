//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// k_means_regression_tree_single_mexutil.cpp
//
// Code generation for function 'k_means_regression_tree_single_mexutil'
//

// Include files
#include "k_means_regression_tree_single_mexutil.h"
#include "rt_nonfinite.h"

// Function Definitions
const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

// End of code generation (k_means_regression_tree_single_mexutil.cpp)
