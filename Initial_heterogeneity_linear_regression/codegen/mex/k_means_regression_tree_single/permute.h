//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// permute.h
//
// Code generation for function 'permute'
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
void permute(const emlrtStack &sp, const ::coder::array<real_T, 3U> &a,
             ::coder::array<real_T, 3U> &b);

}

// End of code generation (permute.h)
