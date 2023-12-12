//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "k_means_regression_tree_single_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo lf_emlrtRSI{
    144,                                                        // lineNo
    "eml_find",                                                 // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo mf_emlrtRSI{
    382,                                                        // lineNo
    "find_first_indices",                                       // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo nf_emlrtRSI{
    402,                                                        // lineNo
    "find_first_indices",                                       // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRTEInfo bb_emlrtRTEI{
    392,                                                        // lineNo
    1,                                                          // colNo
    "find_first_indices",                                       // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo oe_emlrtRTEI{
    369,                                                        // lineNo
    24,                                                         // colNo
    "find",                                                     // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo pe_emlrtRTEI{
    144,                                                        // lineNo
    9,                                                          // colNo
    "find",                                                     // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

// Function Definitions
namespace coder {
void eml_find(const emlrtStack &sp, const ::coder::array<boolean_T, 1U> &x,
              ::coder::array<int32_T, 1U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(0);
  st.site = &lf_emlrtRSI;
  idx = 0;
  i.set_size(&oe_emlrtRTEI, &st, x.size(0));
  b_st.site = &mf_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &bb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(0) == 1) {
    if (idx == 0) {
      i.set_size(&pe_emlrtRTEI, &st, 0);
    }
  } else {
    int32_T iv[2];
    if (idx < 1) {
      nx = 0;
    } else {
      nx = idx;
    }
    iv[0] = 1;
    iv[1] = nx;
    b_st.site = &nf_emlrtRSI;
    internal::indexShapeCheck(b_st, i.size(0), iv);
    i.set_size(&pe_emlrtRTEI, &st, nx);
  }
}

} // namespace coder

// End of code generation (find.cpp)
