//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_k_means_regression_tree_single_mex.cpp
//
// Code generation for function '_coder_k_means_regression_tree_single_mex'
//

// Include files
#include "_coder_k_means_regression_tree_single_mex.h"
#include "_coder_k_means_regression_tree_single_api.h"
#include "k_means_regression_tree_single_data.h"
#include "k_means_regression_tree_single_initialize.h"
#include "k_means_regression_tree_single_terminate.h"
#include "rt_nonfinite.h"
#include <stdexcept>

void emlrtExceptionBridge();
void emlrtExceptionBridge()
{
  throw std::runtime_error("");
}
// Function Definitions
void k_means_regression_tree_single_mexFunction(int32_T nlhs, mxArray *plhs[6],
                                                int32_T nrhs,
                                                const mxArray *prhs[15])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *outputs[6];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 15) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 15, 4,
                        30, "k_means_regression_tree_single");
  }
  if (nlhs > 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 30,
                        "k_means_regression_tree_single");
  }
  // Call the function.
  c_k_means_regression_tree_singl(prhs, nlhs, outputs);
  // Copy over outputs to the caller.
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&k_means_regression_tree_single_atexit);
  // Module initialization.
  k_means_regression_tree_single_initialize();
  try {
    // Dispatch the entry-point.
    k_means_regression_tree_single_mexFunction(nlhs, plhs, nrhs, prhs);
    // Module termination.
    k_means_regression_tree_single_terminate();
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           (void *)&emlrtExceptionBridge, "GBK", true);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_k_means_regression_tree_single_mex.cpp)
