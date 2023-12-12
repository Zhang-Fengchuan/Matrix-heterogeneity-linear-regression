//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// k_means_regression_tree_single_initialize.cpp
//
// Code generation for function 'k_means_regression_tree_single_initialize'
//

// Include files
#include "k_means_regression_tree_single_initialize.h"
#include "_coder_k_means_regression_tree_single_mex.h"
#include "k_means_regression_tree_single_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static void k_means_regression_tree_single_once();

// Function Definitions
static void k_means_regression_tree_single_once()
{
  mex_InitInfAndNan();
}

void k_means_regression_tree_single_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    k_means_regression_tree_single_once();
  }
}

// End of code generation (k_means_regression_tree_single_initialize.cpp)
