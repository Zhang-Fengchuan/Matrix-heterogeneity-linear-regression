//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_k_means_regression_tree_single_api.cpp
//
// Code generation for function '_coder_k_means_regression_tree_single_api'
//

// Include files
#include "_coder_k_means_regression_tree_single_api.h"
#include "k_means_regression_tree_single.h"
#include "k_means_regression_tree_single_data.h"
#include "k_means_regression_tree_single_mexutil.h"
#include "k_means_regression_tree_single_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret);

static real_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret);

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret);

static void emlrt_marshallIn(const emlrtStack &sp,
                             const mxArray *partitions_old,
                             const char_T *identifier, cell_wrap_0 &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_0 &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y);

static real_T emlrt_marshallIn(const emlrtStack &sp,
                               const mxArray *num_partitions,
                               const char_T *identifier);

static real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *x,
                             const char_T *identifier,
                             coder::array<real_T, 3U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 3U> &y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *y,
                             const char_T *identifier,
                             coder::array<real_T, 1U> &b_y);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u);

static const mxArray *emlrt_marshallOut(const coder::array<cell_wrap_0, 1U> &u);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 1U> &u);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2]{1, -1};
  int32_T iv[2];
  boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 8, false);
  emlrtDestroyArray(&src);
}

static real_T b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 3U> &ret)
{
  static const int32_T dims[3]{-1, -1, -1};
  int32_T iv[3];
  boolean_T bv[3]{true, true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 3U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret.prealloc(iv[0] * iv[1] * iv[2]);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, iv[0], iv[1], iv[2]);
  ret.set(static_cast<real_T *>(emlrtMxGetData(src)), ret.size(0), ret.size(1),
          ret.size(2));
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               coder::array<real_T, 1U> &ret)
{
  static const int32_T dims{-1};
  int32_T i;
  boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret.prealloc(i);
  ret.set_size(static_cast<emlrtRTEInfo *>(nullptr), &sp, i);
  ret.set(static_cast<real_T *>(emlrtMxGetData(src)), ret.size(0));
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack &sp,
                             const mxArray *partitions_old,
                             const char_T *identifier, cell_wrap_0 &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(partitions_old), &thisId, y);
  emlrtDestroyArray(&partitions_old);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, cell_wrap_0 &y)
{
  emlrtMsgIdentifier thisId;
  int32_T i;
  char_T str[11];
  boolean_T b;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  b = false;
  i = 1;
  emlrtCheckCell((emlrtCTX)&sp, parentId, u, 1U, &i, &b);
  emlrtMexSnprintf(&str[0], (size_t)11U, "%d", 1);
  thisId.fIdentifier = &str[0];
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)&sp, parentId, u, 0)),
                   &thisId, y.f1);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 2U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T emlrt_marshallIn(const emlrtStack &sp,
                               const mxArray *num_partitions,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(num_partitions), &thisId);
  emlrtDestroyArray(&num_partitions);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = b_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *x,
                             const char_T *identifier,
                             coder::array<real_T, 3U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(x), &thisId, y);
  emlrtDestroyArray(&x);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 3U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *y,
                             const char_T *identifier,
                             coder::array<real_T, 1U> &b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::array<real_T, 1U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  static const int32_T iv[2]{0, 0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 2U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 2U> *)&u)->size(), 2);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<cell_wrap_0, 1U> &u)
{
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  y = nullptr;
  emlrtAssign(&y, emlrtCreateCellArrayR2014a(
                      1, ((coder::array<cell_wrap_0, 1U> *)&u)->size()));
  if (u.size(0) > 0) {
    iv[0] = 1;
  }
  for (int32_T i{0}; i < u.size(0); i++) {
    int32_T i1;
    b_y = nullptr;
    iv[1] = u[i].f1.size(1);
    m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
    pData = emlrtMxGetPr(m);
    i1 = 0;
    for (int32_T b_i{0}; b_i < u[i].f1.size(1); b_i++) {
      pData[i1] = u[i].f1[b_i];
      i1++;
    }
    emlrtAssign(&b_y, m);
    emlrtSetCell(y, i, b_y);
  }
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 1U> &u)
{
  static const int32_T i{0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 1U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 1U> *)&u)->size(), 1);
  emlrtAssign(&y, m);
  return y;
}

void c_k_means_regression_tree_singl(const mxArray *const prhs[15],
                                     int32_T nlhs, const mxArray *plhs[6])
{
  coder::array<cell_wrap_0, 1U> partitions;
  coder::array<real_T, 3U> x;
  coder::array<real_T, 2U> coefficients;
  coder::array<real_T, 1U> beta0;
  coder::array<real_T, 1U> beta_back;
  coder::array<real_T, 1U> combine;
  coder::array<real_T, 1U> gamma0;
  coder::array<real_T, 1U> gamma_back;
  coder::array<real_T, 1U> y;
  cell_wrap_0 partitions_old;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *prhs_copy_idx_12;
  real_T col_size;
  real_T combine_principle;
  real_T eps_initial;
  real_T eps_out;
  real_T iter_max_initial_in;
  real_T iter_max_initial_out;
  real_T num_partitions;
  real_T random_number;
  real_T residual_coefficients;
  real_T row_size;
  real_T sample_size_sum;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  prhs_copy_idx_12 = emlrtProtectR2012b(prhs[12], 12, false, -1);
  // Marshall function inputs
  num_partitions = emlrt_marshallIn(st, emlrtAliasP(prhs[0]), "num_partitions");
  eps_initial = emlrt_marshallIn(st, emlrtAliasP(prhs[1]), "eps_initial");
  eps_out = emlrt_marshallIn(st, emlrtAliasP(prhs[2]), "eps_out");
  iter_max_initial_in =
      emlrt_marshallIn(st, emlrtAliasP(prhs[3]), "iter_max_initial_in");
  iter_max_initial_out =
      emlrt_marshallIn(st, emlrtAliasP(prhs[4]), "iter_max_initial_out");
  combine_principle =
      emlrt_marshallIn(st, emlrtAliasP(prhs[5]), "combine_principle");
  row_size = emlrt_marshallIn(st, emlrtAliasP(prhs[6]), "row_size");
  col_size = emlrt_marshallIn(st, emlrtAliasP(prhs[7]), "col_size");
  x.no_free();
  emlrt_marshallIn(st, emlrtAlias(prhs[8]), "x", x);
  y.no_free();
  emlrt_marshallIn(st, emlrtAlias(prhs[9]), "y", y);
  random_number = emlrt_marshallIn(st, emlrtAliasP(prhs[10]), "random_number");
  beta0.no_free();
  emlrt_marshallIn(st, emlrtAlias(prhs[11]), "beta0", beta0);
  gamma0.no_free();
  emlrt_marshallIn(st, emlrtAlias(prhs_copy_idx_12), "gamma0", gamma0);
  emlrt_marshallIn(st, emlrtAliasP(prhs[13]), "partitions_old", partitions_old);
  sample_size_sum =
      emlrt_marshallIn(st, emlrtAliasP(prhs[14]), "sample_size_sum");
  // Invoke the target function
  k_means_regression_tree_single(
      &st, num_partitions, eps_initial, eps_out, iter_max_initial_in,
      iter_max_initial_out, combine_principle, row_size, col_size, x, y,
      random_number, beta0, gamma0, &partitions_old, sample_size_sum, beta_back,
      gamma_back, coefficients, partitions, combine, &residual_coefficients);
  // Marshall function outputs
  beta_back.no_free();
  plhs[0] = emlrt_marshallOut(beta_back);
  if (nlhs > 1) {
    gamma_back.no_free();
    plhs[1] = emlrt_marshallOut(gamma_back);
  }
  if (nlhs > 2) {
    coefficients.no_free();
    plhs[2] = emlrt_marshallOut(coefficients);
  }
  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(partitions);
  }
  if (nlhs > 4) {
    combine.no_free();
    plhs[4] = emlrt_marshallOut(combine);
  }
  if (nlhs > 5) {
    plhs[5] = emlrt_marshallOut(residual_coefficients);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

// End of code generation (_coder_k_means_regression_tree_single_api.cpp)
