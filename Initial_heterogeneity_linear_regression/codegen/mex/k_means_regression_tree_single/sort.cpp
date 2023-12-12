//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sort.cpp
//
// Code generation for function 'sort'
//

// Include files
#include "sort.h"
#include "eml_int_forloop_overflow_check.h"
#include "k_means_regression_tree_single_data.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo kb_emlrtRSI{
    72,                                                             // lineNo
    "sort",                                                         // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    105,       // lineNo
    "sortIdx", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    308,                // lineNo
    "block_merge_sort", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    316,                // lineNo
    "block_merge_sort", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo ob_emlrtRSI{
    317,                // lineNo
    "block_merge_sort", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo pb_emlrtRSI{
    325,                // lineNo
    "block_merge_sort", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo qb_emlrtRSI{
    333,                // lineNo
    "block_merge_sort", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo rb_emlrtRSI{
    392,                      // lineNo
    "initialize_vector_sort", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
    420,                      // lineNo
    "initialize_vector_sort", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    427,                      // lineNo
    "initialize_vector_sort", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    587,                // lineNo
    "merge_pow2_block", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo vb_emlrtRSI{
    589,                // lineNo
    "merge_pow2_block", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    617,                // lineNo
    "merge_pow2_block", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pathName
};

static emlrtRTEInfo qe_emlrtRTEI{
    56,                                                                // lineNo
    5,                                                                 // colNo
    "sortIdx",                                                         // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pName
};

static emlrtRTEInfo re_emlrtRTEI{
    386,                                                               // lineNo
    1,                                                                 // colNo
    "sortIdx",                                                         // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pName
};

static emlrtRTEInfo se_emlrtRTEI{
    388,                                                               // lineNo
    1,                                                                 // colNo
    "sortIdx",                                                         // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void sort(const emlrtStack &sp, ::coder::array<real_T, 2U> &x)
{
  array<real_T, 1U> xwork;
  array<int32_T, 2U> idx;
  array<int32_T, 1U> iwork;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T i;
  int32_T ib;
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
  st.site = &kb_emlrtRSI;
  idx.set_size(&qe_emlrtRTEI, &st, 1, x.size(1));
  ib = x.size(1);
  for (i = 0; i < ib; i++) {
    idx[i] = 0;
  }
  if (x.size(1) != 0) {
    real_T x4[4];
    int32_T idx4[4];
    int32_T bLen;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T idx_tmp;
    int32_T n;
    int32_T quartetOffset;
    int32_T wOffset_tmp;
    b_st.site = &lb_emlrtRSI;
    c_st.site = &mb_emlrtRSI;
    n = x.size(1);
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    ib = x.size(1);
    iwork.set_size(&re_emlrtRTEI, &c_st, ib);
    xwork.set_size(&se_emlrtRTEI, &c_st, x.size(1));
    for (i = 0; i < ib; i++) {
      iwork[i] = 0;
      xwork[i] = 0.0;
    }
    bLen = 0;
    ib = 0;
    d_st.site = &rb_emlrtRSI;
    if (x.size(1) > 2147483646) {
      e_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(e_st);
    }
    for (int32_T k{0}; k < n; k++) {
      if (muDoubleScalarIsNaN(x[k])) {
        idx_tmp = (n - bLen) - 1;
        idx[idx_tmp] = k + 1;
        xwork[idx_tmp] = x[k];
        bLen++;
      } else {
        ib++;
        idx4[ib - 1] = k + 1;
        x4[ib - 1] = x[k];
        if (ib == 4) {
          real_T d;
          real_T d1;
          int8_T b_i2;
          int8_T b_i3;
          int8_T b_i4;
          int8_T i1;
          quartetOffset = k - bLen;
          if (x4[0] <= x4[1]) {
            ib = 1;
            i2 = 2;
          } else {
            ib = 2;
            i2 = 1;
          }
          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }
          d = x4[i3 - 1];
          d1 = x4[ib - 1];
          if (d1 <= d) {
            d1 = x4[i2 - 1];
            if (d1 <= d) {
              i1 = static_cast<int8_T>(ib);
              b_i2 = static_cast<int8_T>(i2);
              b_i3 = static_cast<int8_T>(i3);
              b_i4 = static_cast<int8_T>(i4);
            } else if (d1 <= x4[i4 - 1]) {
              i1 = static_cast<int8_T>(ib);
              b_i2 = static_cast<int8_T>(i3);
              b_i3 = static_cast<int8_T>(i2);
              b_i4 = static_cast<int8_T>(i4);
            } else {
              i1 = static_cast<int8_T>(ib);
              b_i2 = static_cast<int8_T>(i3);
              b_i3 = static_cast<int8_T>(i4);
              b_i4 = static_cast<int8_T>(i2);
            }
          } else {
            d = x4[i4 - 1];
            if (d1 <= d) {
              if (x4[i2 - 1] <= d) {
                i1 = static_cast<int8_T>(i3);
                b_i2 = static_cast<int8_T>(ib);
                b_i3 = static_cast<int8_T>(i2);
                b_i4 = static_cast<int8_T>(i4);
              } else {
                i1 = static_cast<int8_T>(i3);
                b_i2 = static_cast<int8_T>(ib);
                b_i3 = static_cast<int8_T>(i4);
                b_i4 = static_cast<int8_T>(i2);
              }
            } else {
              i1 = static_cast<int8_T>(i3);
              b_i2 = static_cast<int8_T>(i4);
              b_i3 = static_cast<int8_T>(ib);
              b_i4 = static_cast<int8_T>(i2);
            }
          }
          idx[quartetOffset - 3] = idx4[i1 - 1];
          idx[quartetOffset - 2] = idx4[b_i2 - 1];
          idx[quartetOffset - 1] = idx4[b_i3 - 1];
          idx[quartetOffset] = idx4[b_i4 - 1];
          x[quartetOffset - 3] = x4[i1 - 1];
          x[quartetOffset - 2] = x4[b_i2 - 1];
          x[quartetOffset - 1] = x4[b_i3 - 1];
          x[quartetOffset] = x4[b_i4 - 1];
          ib = 0;
        }
      }
    }
    wOffset_tmp = x.size(1) - bLen;
    if (ib > 0) {
      int8_T perm[4];
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib == 1) {
        perm[0] = 1;
      } else if (ib == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      d_st.site = &sb_emlrtRSI;
      if (ib > 2147483646) {
        e_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(e_st);
      }
      i = static_cast<uint8_T>(ib);
      for (int32_T k{0}; k < i; k++) {
        idx_tmp = perm[k] - 1;
        quartetOffset = (wOffset_tmp - ib) + k;
        idx[quartetOffset] = idx4[idx_tmp];
        x[quartetOffset] = x4[idx_tmp];
      }
    }
    ib = bLen >> 1;
    d_st.site = &tb_emlrtRSI;
    for (int32_T k{0}; k < ib; k++) {
      quartetOffset = wOffset_tmp + k;
      i2 = idx[quartetOffset];
      idx_tmp = (n - k) - 1;
      idx[quartetOffset] = idx[idx_tmp];
      idx[idx_tmp] = i2;
      x[quartetOffset] = xwork[idx_tmp];
      x[idx_tmp] = xwork[quartetOffset];
    }
    if ((bLen & 1) != 0) {
      i = wOffset_tmp + ib;
      x[i] = xwork[i];
    }
    ib = 2;
    if (wOffset_tmp > 1) {
      if (x.size(1) >= 256) {
        int32_T nBlocks;
        nBlocks = wOffset_tmp >> 8;
        if (nBlocks > 0) {
          c_st.site = &nb_emlrtRSI;
          for (int32_T b{0}; b < nBlocks; b++) {
            real_T b_xwork[256];
            int32_T b_iwork[256];
            c_st.site = &ob_emlrtRSI;
            i4 = (b << 8) - 1;
            for (int32_T b_b{0}; b_b < 6; b_b++) {
              bLen = 1 << (b_b + 2);
              n = bLen << 1;
              i = 256 >> (b_b + 3);
              d_st.site = &ub_emlrtRSI;
              for (int32_T k{0}; k < i; k++) {
                i2 = (i4 + k * n) + 1;
                d_st.site = &vb_emlrtRSI;
                for (quartetOffset = 0; quartetOffset < n; quartetOffset++) {
                  ib = i2 + quartetOffset;
                  b_iwork[quartetOffset] = idx[ib];
                  b_xwork[quartetOffset] = x[ib];
                }
                i3 = 0;
                quartetOffset = bLen;
                ib = i2 - 1;
                int32_T exitg1;
                do {
                  exitg1 = 0;
                  ib++;
                  if (b_xwork[i3] <= b_xwork[quartetOffset]) {
                    idx[ib] = b_iwork[i3];
                    x[ib] = b_xwork[i3];
                    if (i3 + 1 < bLen) {
                      i3++;
                    } else {
                      exitg1 = 1;
                    }
                  } else {
                    idx[ib] = b_iwork[quartetOffset];
                    x[ib] = b_xwork[quartetOffset];
                    if (quartetOffset + 1 < n) {
                      quartetOffset++;
                    } else {
                      ib -= i3;
                      d_st.site = &wb_emlrtRSI;
                      for (quartetOffset = i3 + 1; quartetOffset <= bLen;
                           quartetOffset++) {
                        idx_tmp = ib + quartetOffset;
                        idx[idx_tmp] = b_iwork[quartetOffset - 1];
                        x[idx_tmp] = b_xwork[quartetOffset - 1];
                      }
                      exitg1 = 1;
                    }
                  }
                } while (exitg1 == 0);
              }
            }
          }
          ib = nBlocks << 8;
          quartetOffset = wOffset_tmp - ib;
          if (quartetOffset > 0) {
            c_st.site = &pb_emlrtRSI;
            merge_block(c_st, idx, x, ib, quartetOffset, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      c_st.site = &qb_emlrtRSI;
      merge_block(c_st, idx, x, 0, wOffset_tmp, ib, iwork, xwork);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace internal
} // namespace coder

// End of code generation (sort.cpp)
