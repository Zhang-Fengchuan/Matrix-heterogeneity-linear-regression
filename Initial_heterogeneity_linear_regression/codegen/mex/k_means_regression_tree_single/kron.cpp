//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// kron.cpp
//
// Code generation for function 'kron'
//

// Include files
#include "kron.h"
#include "eml_int_forloop_overflow_check.h"
#include "k_means_regression_tree_single_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo jd_emlrtRSI{
    32,                                                       // lineNo
    "kron",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\kron.m" // pathName
};

static emlrtRSInfo kd_emlrtRSI{
    33,                                                       // lineNo
    "kron",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\kron.m" // pathName
};

static emlrtRSInfo ld_emlrtRSI{
    34,                                                       // lineNo
    "kron",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\kron.m" // pathName
};

static emlrtRTEInfo de_emlrtRTEI{
    30,                                                       // lineNo
    20,                                                       // colNo
    "kron",                                                   // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\kron.m" // pName
};

// Function Definitions
namespace coder {
void kron(const emlrtStack &sp, const ::coder::array<real_T, 2U> &A,
          const ::coder::array<real_T, 2U> &B, ::coder::array<real_T, 2U> &K)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T kidx;
  int32_T ma;
  int32_T na;
  int32_T nb;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  ma = A.size(0);
  na = A.size(1);
  nb = B.size(1);
  K.set_size(&de_emlrtRTEI, &sp, A.size(0), A.size(1) * B.size(1));
  kidx = -1;
  st.site = &jd_emlrtRSI;
  if (A.size(1) > 2147483646) {
    b_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (int32_T b_j1{0}; b_j1 < na; b_j1++) {
    st.site = &kd_emlrtRSI;
    if (nb > 2147483646) {
      b_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(b_st);
    }
    for (int32_T j2{0}; j2 < nb; j2++) {
      int32_T scalarLB;
      int32_T vectorUB;
      st.site = &ld_emlrtRSI;
      if (ma > 2147483646) {
        b_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      scalarLB = (ma / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i1{0}; i1 <= vectorUB; i1 += 2) {
        _mm_storeu_pd(&K[(kidx + i1) + 1],
                      _mm_mul_pd(_mm_loadu_pd(&A[i1 + A.size(0) * b_j1]),
                                 _mm_set1_pd(B[j2])));
      }
      for (int32_T i1{scalarLB}; i1 < ma; i1++) {
        K[(kidx + i1) + 1] = A[i1 + A.size(0) * b_j1] * B[j2];
      }
      kidx += ma;
    }
  }
}

} // namespace coder

// End of code generation (kron.cpp)
