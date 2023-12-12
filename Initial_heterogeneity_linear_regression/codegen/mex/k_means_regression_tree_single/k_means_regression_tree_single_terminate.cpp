//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// k_means_regression_tree_single_terminate.cpp
//
// Code generation for function 'k_means_regression_tree_single_terminate'
//

// Include files
#include "k_means_regression_tree_single_terminate.h"
#include "_coder_k_means_regression_tree_single_mex.h"
#include "k_means_regression_tree_single_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void k_means_regression_tree_single_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void k_means_regression_tree_single_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (k_means_regression_tree_single_terminate.cpp)
