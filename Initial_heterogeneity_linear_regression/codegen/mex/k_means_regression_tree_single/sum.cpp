//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sum.cpp
//
// Code generation for function 'sum'
//

// Include files
#include "sum.h"
#include "combineVectorElements.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo fc_emlrtRSI{
    20,                                                          // lineNo
    "sum",                                                       // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m" // pathName
};

static emlrtRSInfo
    gc_emlrtRSI{
        99,        // lineNo
        "sumprod", // fcnName
        "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod."
        "m" // pathName
    };

// Function Definitions
namespace coder {
real_T sum(const emlrtStack &sp, const ::coder::array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &gc_emlrtRSI;
  return combineVectorElements(b_st, x);
}

} // namespace coder

// End of code generation (sum.cpp)
