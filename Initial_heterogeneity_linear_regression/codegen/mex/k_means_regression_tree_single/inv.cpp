//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// inv.cpp
//
// Code generation for function 'inv'
//

// Include files
#include "inv.h"
#include "eml_int_forloop_overflow_check.h"
#include "k_means_regression_tree_single_data.h"
#include "k_means_regression_tree_single_mexutil.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "blas.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo wd_emlrtRSI{
    21,                                                         // lineNo
    "inv",                                                      // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo xd_emlrtRSI{
    22,                                                         // lineNo
    "inv",                                                      // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo yd_emlrtRSI{
    173,                                                        // lineNo
    "invNxN",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo ae_emlrtRSI{
    174,                                                        // lineNo
    "invNxN",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo be_emlrtRSI{
    177,                                                        // lineNo
    "invNxN",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo ce_emlrtRSI{
    180,                                                        // lineNo
    "invNxN",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo de_emlrtRSI{
    183,                                                        // lineNo
    "invNxN",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo ee_emlrtRSI{
    190,                                                        // lineNo
    "invNxN",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo
    fe_emlrtRSI{
        28,       // lineNo
        "xgetrf", // fcnName
        "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "lapack\\xgetrf.m" // pathName
    };

static emlrtRSInfo
    ge_emlrtRSI{
        92,             // lineNo
        "ceval_xgetrf", // fcnName
        "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "lapack\\xgetrf.m" // pathName
    };

static emlrtRSInfo
    he_emlrtRSI{
        59,             // lineNo
        "ceval_xgetrf", // fcnName
        "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "lapack\\xgetrf.m" // pathName
    };

static emlrtRSInfo ie_emlrtRSI{
    28,                                                           // lineNo
    "repmat",                                                     // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" // pathName
};

static emlrtRSInfo je_emlrtRSI{
    28,                                                        // lineNo
    "colon",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
};

static emlrtRSInfo ke_emlrtRSI{
    82,                                                        // lineNo
    "colon",                                                   // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
};

static emlrtRSInfo le_emlrtRSI{
    148,                                                       // lineNo
    "eml_integer_colon_dispatcher",                            // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
};

static emlrtRSInfo me_emlrtRSI{
    176,                                                       // lineNo
    "eml_signed_integer_colon",                                // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
};

static emlrtRSInfo ne_emlrtRSI{
    14,              // lineNo
    "eml_ipiv2perm", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_"
    "ipiv2perm.m" // pathName
};

static emlrtRSInfo oe_emlrtRSI{
    67,      // lineNo
    "xtrsm", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m" // pathName
};

static emlrtRSInfo pe_emlrtRSI{
    81,           // lineNo
    "xtrsm_blas", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m" // pathName
};

static emlrtRSInfo qe_emlrtRSI{
    42,                                                         // lineNo
    "checkcond",                                                // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtRSInfo re_emlrtRSI{
    46,                                                         // lineNo
    "checkcond",                                                // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pathName
};

static emlrtMCInfo d_emlrtMCI{
    53,                                                                // lineNo
    19,                                                                // colNo
    "flt2str",                                                         // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    14,                                                         // lineNo
    15,                                                         // colNo
    "inv",                                                      // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    44,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck."
    "m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    47,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck."
    "m" // pName
};

static emlrtRTEInfo ie_emlrtRTEI{
    21,                                                         // lineNo
    5,                                                          // colNo
    "inv",                                                      // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pName
};

static emlrtRTEInfo
    je_emlrtRTEI{
        1,        // lineNo
        37,       // colNo
        "xgetrf", // fName
        "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "lapack\\xgetrf.m" // pName
    };

static emlrtRTEInfo
    ke_emlrtRTEI{
        59,       // lineNo
        29,       // colNo
        "xgetrf", // fName
        "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "lapack\\xgetrf.m" // pName
    };

static emlrtRTEInfo
    le_emlrtRTEI{
        90,       // lineNo
        27,       // colNo
        "xgetrf", // fName
        "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "lapack\\xgetrf.m" // pName
    };

static emlrtRTEInfo me_emlrtRTEI{
    172,                                                       // lineNo
    20,                                                        // colNo
    "colon",                                                   // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pName
};

static emlrtRTEInfo ne_emlrtRTEI{
    19,                                                         // lineNo
    5,                                                          // colNo
    "inv",                                                      // fName
    "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" // pName
};

static emlrtRSInfo qf_emlrtRSI{
    53,        // lineNo
    "flt2str", // fcnName
    "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m" // pathName
};

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14]);

static const mxArray *b_sprintf(const emlrtStack &sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo &location);

static void emlrt_marshallIn(const emlrtStack &sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14]);

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[14]);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack &sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2]{1, 14};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)&sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)&sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static const mxArray *b_sprintf(const emlrtStack &sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo &location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 2, &pArrays[0],
                               "sprintf", true, &location);
}

static void emlrt_marshallIn(const emlrtStack &sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void emlrt_marshallIn(const emlrtStack &sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[14])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

namespace coder {
void inv(const emlrtStack &sp, const ::coder::array<real_T, 2U> &x,
         ::coder::array<real_T, 2U> &y)
{
  static const int32_T iv[2]{1, 6};
  static const char_T fname[19]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 't', 'r', 'f',
                                '_', 'w', 'o', 'r', 'k'};
  static const char_T rfmt[6]{'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  array<ptrdiff_t, 1U> ipiv_t;
  array<real_T, 2U> b_x;
  array<int32_T, 2U> ipiv;
  array<int32_T, 2U> p;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  real_T n1x;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (x.size(0) != x.size(1)) {
    emlrtErrorWithMessageIdR2018a(&sp, &x_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if ((x.size(0) == 0) || (x.size(1) == 0)) {
    int32_T b_n;
    y.set_size(&ne_emlrtRTEI, &sp, x.size(0), x.size(1));
    b_n = x.size(0) * x.size(1);
    for (int32_T i{0}; i < b_n; i++) {
      y[i] = x[i];
    }
  } else {
    real_T n1xinv;
    real_T rc;
    int32_T b_n;
    int32_T i;
    int32_T n;
    int32_T yk;
    st.site = &wd_emlrtRSI;
    n = x.size(0);
    y.set_size(&ie_emlrtRTEI, &st, x.size(0), x.size(1));
    b_n = x.size(0) * x.size(1);
    for (i = 0; i < b_n; i++) {
      y[i] = 0.0;
    }
    b_st.site = &yd_emlrtRSI;
    b_x.set_size(&je_emlrtRTEI, &b_st, x.size(0), x.size(1));
    for (i = 0; i < b_n; i++) {
      b_x[i] = x[i];
    }
    c_st.site = &fe_emlrtRSI;
    d_st.site = &he_emlrtRSI;
    e_st.site = &ie_emlrtRSI;
    ipiv_t.set_size(&ke_emlrtRTEI, &d_st, muIntScalarMin_sint32(n, n));
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)x.size(0),
                                 (ptrdiff_t)x.size(0), &(b_x.data())[0],
                                 (ptrdiff_t)x.size(0), &(ipiv_t.data())[0]);
    ipiv.set_size(&le_emlrtRTEI, &c_st, 1, ipiv_t.size(0));
    d_st.site = &ge_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&d_st, &y_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&d_st, &ab_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &fname[0], 12, (int32_T)info_t);
      }
    }
    i = ipiv_t.size(0) - 1;
    for (int32_T k{0}; k <= i; k++) {
      ipiv[k] = (int32_T)ipiv_t[k];
    }
    b_st.site = &ae_emlrtRSI;
    c_st.site = &ne_emlrtRSI;
    d_st.site = &je_emlrtRSI;
    e_st.site = &ke_emlrtRSI;
    f_st.site = &le_emlrtRSI;
    b_n = x.size(0);
    p.set_size(&me_emlrtRTEI, &f_st, 1, x.size(0));
    p[0] = 1;
    yk = 1;
    g_st.site = &me_emlrtRSI;
    if (x.size(0) > 2147483646) {
      h_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(h_st);
    }
    for (int32_T k{2}; k <= b_n; k++) {
      yk++;
      p[k - 1] = yk;
    }
    i = ipiv.size(1);
    for (int32_T k{0}; k < i; k++) {
      b_n = ipiv[k];
      if (b_n > k + 1) {
        yk = p[b_n - 1];
        p[b_n - 1] = p[k];
        p[k] = yk;
      }
    }
    b_st.site = &be_emlrtRSI;
    for (int32_T k{0}; k < n; k++) {
      i = p[k];
      y[k + y.size(0) * (i - 1)] = 1.0;
      b_st.site = &ce_emlrtRSI;
      if ((k + 1 <= n) && (n > 2147483646)) {
        c_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(c_st);
      }
      for (yk = k + 1; yk <= n; yk++) {
        if (y[(yk + y.size(0) * (i - 1)) - 1] != 0.0) {
          b_n = yk + 1;
          b_st.site = &de_emlrtRSI;
          for (int32_T b_i{b_n}; b_i <= n; b_i++) {
            y[(b_i + y.size(0) * (i - 1)) - 1] =
                y[(b_i + y.size(0) * (i - 1)) - 1] -
                y[(yk + y.size(0) * (i - 1)) - 1] *
                    b_x[(b_i + b_x.size(0) * (yk - 1)) - 1];
          }
        }
      }
    }
    b_st.site = &ee_emlrtRSI;
    c_st.site = &oe_emlrtRSI;
    d_st.site = &pe_emlrtRSI;
    n1x = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)x.size(0);
    n_t = (ptrdiff_t)x.size(0);
    lda_t = (ptrdiff_t)x.size(0);
    ldb_t = (ptrdiff_t)x.size(0);
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &n1x,
          &(b_x.data())[0], &lda_t, &(y.data())[0], &ldb_t);
    st.site = &xd_emlrtRSI;
    n1x = b_norm(x);
    n1xinv = b_norm(y);
    rc = 1.0 / (n1x * n1xinv);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      b_st.site = &qe_emlrtRSI;
      internal::warning(b_st);
    } else if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
      char_T str[14];
      b_st.site = &re_emlrtRSI;
      b_y = nullptr;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
      emlrtAssign(&b_y, m);
      c_st.site = &qf_emlrtRSI;
      emlrt_marshallIn(c_st,
                       b_sprintf(c_st, b_y, emlrt_marshallOut(rc), d_emlrtMCI),
                       "<output of sprintf>", str);
      b_st.site = &re_emlrtRSI;
      internal::warning(b_st, str);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (inv.cpp)
