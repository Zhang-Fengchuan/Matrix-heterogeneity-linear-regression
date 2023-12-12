//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// combineVectorElements.cpp
//
// Code generation for function 'combineVectorElements'
//

// Include files
#include "combineVectorElements.h"
#include "k_means_regression_tree_single_data.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo ic_emlrtRSI{
    107,                // lineNo
    "blockedSummation", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pathName
};

static emlrtRSInfo jc_emlrtRSI{
    22,                    // lineNo
    "sumMatrixIncludeNaN", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixInclu"
    "deNaN.m" // pathName
};

static emlrtRSInfo kc_emlrtRSI{
    42,                 // lineNo
    "sumMatrixColumns", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixInclu"
    "deNaN.m" // pathName
};

static emlrtRSInfo mc_emlrtRSI{
    57,                 // lineNo
    "sumMatrixColumns", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixInclu"
    "deNaN.m" // pathName
};

// Function Definitions
namespace coder {
real_T combineVectorElements(const emlrtStack &sp,
                             const ::coder::array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T y;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &hc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (x.size(0) == 0) {
    y = 0.0;
  } else {
    b_st.site = &ic_emlrtRSI;
    c_st.site = &jc_emlrtRSI;
    if (x.size(0) < 4096) {
      d_st.site = &kc_emlrtRSI;
      y = sumColumnB(d_st, x, x.size(0));
    } else {
      int32_T inb;
      int32_T nfb;
      int32_T nleft;
      nfb = static_cast<int32_T>(static_cast<uint32_T>(x.size(0)) >> 12);
      inb = nfb << 12;
      nleft = x.size(0) - inb;
      y = sumColumnB4(x, 1);
      for (int32_T ib{2}; ib <= nfb; ib++) {
        y += sumColumnB4(x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        d_st.site = &mc_emlrtRSI;
        y += sumColumnB(d_st, x, nleft, inb + 1);
      }
    }
  }
  return y;
}

} // namespace coder

// End of code generation (combineVectorElements.cpp)
