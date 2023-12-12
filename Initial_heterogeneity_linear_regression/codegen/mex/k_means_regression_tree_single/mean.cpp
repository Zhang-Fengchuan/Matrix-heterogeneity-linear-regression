//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mean.cpp
//
// Code generation for function 'mean'
//

// Include files
#include "mean.h"
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "k_means_regression_tree_single_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo uc_emlrtRSI{
    112,                // lineNo
    "blockedSummation", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pathName
};

static emlrtRSInfo vc_emlrtRSI{
    173,                // lineNo
    "colMajorFlatIter", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pathName
};

static emlrtRSInfo wc_emlrtRSI{
    190,                // lineNo
    "colMajorFlatIter", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pathName
};

static emlrtRSInfo xc_emlrtRSI{
    192,                // lineNo
    "colMajorFlatIter", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pathName
};

static emlrtRSInfo yc_emlrtRSI{
    204,                // lineNo
    "colMajorFlatIter", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    207,                // lineNo
    "colMajorFlatIter", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pathName
};

static emlrtRSInfo bd_emlrtRSI{
    225,                // lineNo
    "colMajorFlatIter", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pathName
};

static emlrtRSInfo cd_emlrtRSI{
    227,                // lineNo
    "colMajorFlatIter", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pathName
};

static emlrtRSInfo dd_emlrtRSI{
    238,                // lineNo
    "colMajorFlatIter", // fcnName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pathName
};

static emlrtRTEInfo yd_emlrtRTEI{
    146,                // lineNo
    24,                 // colNo
    "blockedSummation", // fName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pName
};

static emlrtRTEInfo ae_emlrtRTEI{
    153,                // lineNo
    23,                 // colNo
    "blockedSummation", // fName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummati"
    "on.m" // pName
};

static emlrtRTEInfo be_emlrtRTEI{
    74,                      // lineNo
    9,                       // colNo
    "combineVectorElements", // fName
    "D:"
    "\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorE"
    "lements.m" // pName
};

// Function Definitions
namespace coder {
void mean(const emlrtStack &sp, const ::coder::array<real_T, 3U> &x,
          ::coder::array<real_T, 2U> &y)
{
  __m128d r;
  array<real_T, 1U> bsum;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T firstBlockLength;
  int32_T scalarLB;
  int32_T vectorUB;
  int32_T vstride;
  int32_T xblockoffset;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &tc_emlrtRSI;
  b_st.site = &hc_emlrtRSI;
  if ((x.size(0) == 0) || (x.size(1) == 0) || (x.size(2) == 0)) {
    y.set_size(&be_emlrtRTEI, &b_st, x.size(0), x.size(1));
    firstBlockLength = x.size(0) * x.size(1);
    for (vstride = 0; vstride < firstBlockLength; vstride++) {
      y[vstride] = 0.0;
    }
  } else {
    int32_T bvstride;
    int32_T lastBlockLength;
    int32_T nblocks;
    int32_T xoffset;
    c_st.site = &uc_emlrtRSI;
    vstride = x.size(0) * x.size(1);
    bvstride = vstride << 10;
    y.set_size(&yd_emlrtRTEI, &c_st, x.size(0), x.size(1));
    bsum.set_size(&ae_emlrtRTEI, &c_st, vstride);
    if (x.size(2) <= 1024) {
      firstBlockLength = x.size(2);
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = static_cast<int32_T>(static_cast<uint32_T>(x.size(2)) >> 10);
      lastBlockLength = x.size(2) - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    d_st.site = &vc_emlrtRSI;
    if (vstride > 2147483646) {
      e_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (int32_T xj{0}; xj < vstride; xj++) {
      y[xj] = x[xj];
      bsum[xj] = 0.0;
    }
    d_st.site = &wc_emlrtRSI;
    for (int32_T k{2}; k <= firstBlockLength; k++) {
      xoffset = (k - 1) * vstride;
      d_st.site = &xc_emlrtRSI;
      scalarLB = (vstride / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T xj{0}; xj <= vectorUB; xj += 2) {
        r = _mm_loadu_pd(&y[xj]);
        _mm_storeu_pd(&y[xj], _mm_add_pd(r, _mm_loadu_pd(&x[xoffset + xj])));
      }
      for (int32_T xj{scalarLB}; xj < vstride; xj++) {
        y[xj] = y[xj] + x[xoffset + xj];
      }
    }
    d_st.site = &yc_emlrtRSI;
    for (int32_T ib{2}; ib <= nblocks; ib++) {
      xblockoffset = (ib - 1) * bvstride;
      d_st.site = &ad_emlrtRSI;
      for (int32_T xj{0}; xj < vstride; xj++) {
        bsum[xj] = x[xblockoffset + xj];
      }
      if (ib == nblocks) {
        firstBlockLength = lastBlockLength;
      } else {
        firstBlockLength = 1024;
      }
      d_st.site = &bd_emlrtRSI;
      for (int32_T k{2}; k <= firstBlockLength; k++) {
        xoffset = xblockoffset + (k - 1) * vstride;
        d_st.site = &cd_emlrtRSI;
        scalarLB = (vstride / 2) << 1;
        vectorUB = scalarLB - 2;
        for (int32_T xj{0}; xj <= vectorUB; xj += 2) {
          r = _mm_loadu_pd(&bsum[xj]);
          _mm_storeu_pd(&bsum[xj],
                        _mm_add_pd(r, _mm_loadu_pd(&x[xoffset + xj])));
        }
        for (int32_T xj{scalarLB}; xj < vstride; xj++) {
          bsum[xj] = bsum[xj] + x[xoffset + xj];
        }
      }
      d_st.site = &dd_emlrtRSI;
      scalarLB = (vstride / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T xj{0}; xj <= vectorUB; xj += 2) {
        __m128d r1;
        r = _mm_loadu_pd(&y[xj]);
        r1 = _mm_loadu_pd(&bsum[xj]);
        _mm_storeu_pd(&y[xj], _mm_add_pd(r, r1));
      }
      for (int32_T xj{scalarLB}; xj < vstride; xj++) {
        y[xj] = y[xj] + bsum[xj];
      }
    }
  }
  firstBlockLength = y.size(0) * y.size(1);
  xblockoffset = x.size(2);
  scalarLB = (firstBlockLength / 2) << 1;
  vectorUB = scalarLB - 2;
  for (vstride = 0; vstride <= vectorUB; vstride += 2) {
    r = _mm_loadu_pd(&y[vstride]);
    _mm_storeu_pd(
        &y[vstride],
        _mm_div_pd(r, _mm_set1_pd(static_cast<real_T>(xblockoffset))));
  }
  for (vstride = scalarLB; vstride < firstBlockLength; vstride++) {
    y[vstride] = y[vstride] / static_cast<real_T>(xblockoffset);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

real_T mean(const emlrtStack &sp, const ::coder::array<real_T, 1U> &x)
{
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &tc_emlrtRSI;
  return combineVectorElements(st, x) / static_cast<real_T>(x.size(0));
}

} // namespace coder

// End of code generation (mean.cpp)
