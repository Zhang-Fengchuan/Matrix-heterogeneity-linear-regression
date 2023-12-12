//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rand.cpp
//
// Code generation for function 'rand'
//

// Include files
#include "rand.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRTEInfo xd_emlrtRTEI{
    103,                                                          // lineNo
    24,                                                           // colNo
    "rand",                                                       // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m" // pName
};

// Function Definitions
namespace coder {
void b_rand(const emlrtStack &sp, real_T varargin_2,
            ::coder::array<real_T, 2U> &r)
{
  r.set_size(&xd_emlrtRTEI, &sp, 1, static_cast<int32_T>(varargin_2));
  if (static_cast<int32_T>(varargin_2) != 0) {
    emlrtRandu(&r[0], static_cast<int32_T>(varargin_2));
  }
}

} // namespace coder

// End of code generation (rand.cpp)
