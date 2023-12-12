//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// norm.cpp
//
// Code generation for function 'norm'
//

// Include files
#include "norm.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>

// Function Definitions
namespace coder {
real_T b_norm(const ::coder::array<real_T, 2U> &x)
{
  real_T y;
  boolean_T MATRIX_INPUT_AND_P_IS_ONE;
  boolean_T VECTOR_INPUT_AND_P_IS_NUMERIC;
  VECTOR_INPUT_AND_P_IS_NUMERIC = false;
  MATRIX_INPUT_AND_P_IS_ONE = false;
  if ((x.size(0) == 1) || (x.size(1) == 1)) {
    VECTOR_INPUT_AND_P_IS_NUMERIC = true;
  } else {
    MATRIX_INPUT_AND_P_IS_ONE = true;
  }
  if ((x.size(0) == 0) || (x.size(1) == 0)) {
    y = 0.0;
  } else if (MATRIX_INPUT_AND_P_IS_ONE) {
    int32_T k;
    boolean_T exitg1;
    y = 0.0;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x.size(1) - 1)) {
      real_T s;
      int32_T i;
      s = 0.0;
      i = x.size(0);
      for (int32_T b_i{0}; b_i < i; b_i++) {
        s += muDoubleScalarAbs(x[b_i + x.size(0) * k]);
      }
      if (muDoubleScalarIsNaN(s)) {
        y = rtNaN;
        exitg1 = true;
      } else {
        if (s > y) {
          y = s;
        }
        k++;
      }
    }
  } else if (VECTOR_INPUT_AND_P_IS_NUMERIC) {
    int32_T i;
    y = 0.0;
    i = x.size(0) * x.size(1);
    for (int32_T k{0}; k < i; k++) {
      y += muDoubleScalarAbs(x[k]);
    }
  } else {
    y = rtNaN;
  }
  return y;
}

real_T b_norm(const ::coder::array<real_T, 1U> &x)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  real_T y;
  if (x.size(0) == 0) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)x.size(0);
    incx_t = (ptrdiff_t)1;
    y = dnrm2(&n_t, &(((::coder::array<real_T, 1U> *)&x)->data())[0], &incx_t);
  }
  return y;
}

} // namespace coder

// End of code generation (norm.cpp)
