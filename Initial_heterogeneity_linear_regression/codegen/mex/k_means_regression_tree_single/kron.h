//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// kron.h
//
// Code generation for function 'kron'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
void kron(const emlrtStack &sp, const ::coder::array<real_T, 2U> &A,
          const ::coder::array<real_T, 2U> &B, ::coder::array<real_T, 2U> &K);

}

// End of code generation (kron.h)
