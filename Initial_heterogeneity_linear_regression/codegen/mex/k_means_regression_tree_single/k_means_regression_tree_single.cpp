//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// k_means_regression_tree_single.cpp
//
// Code generation for function 'k_means_regression_tree_single'
//

// Include files
#include "k_means_regression_tree_single.h"
#include "assertValidSizeArg.h"
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "find.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "k_means_regression_tree_single_data.h"
#include "k_means_regression_tree_single_mexutil.h"
#include "k_means_regression_tree_single_types.h"
#include "kron.h"
#include "mean.h"
#include "mtimes.h"
#include "norm.h"
#include "permute.h"
#include "randperm.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo emlrtRSI{ 32,       // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo b_emlrtRSI{ 36,     // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo c_emlrtRSI{ 47,     // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo d_emlrtRSI{ 64,     // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo e_emlrtRSI{ 85,     // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo f_emlrtRSI{ 86,     // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo g_emlrtRSI{ 89,     // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo h_emlrtRSI{ 93,     // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo i_emlrtRSI{ 94,     // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo j_emlrtRSI{ 95,     // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo k_emlrtRSI{ 96,     // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo l_emlrtRSI{ 103,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo m_emlrtRSI{ 109,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo n_emlrtRSI{ 112,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo o_emlrtRSI{ 114,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo p_emlrtRSI{ 116,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo q_emlrtRSI{ 123,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo r_emlrtRSI{ 126,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo s_emlrtRSI{ 128,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo t_emlrtRSI{ 130,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo u_emlrtRSI{ 133,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo v_emlrtRSI{ 134,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo w_emlrtRSI{ 141,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo x_emlrtRSI{ 147,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo y_emlrtRSI{ 162,    // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo ab_emlrtRSI{ 180,   // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo bb_emlrtRSI{ 181,   // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

static emlrtRSInfo jb_emlrtRSI{ 42,    // lineNo
  "sort",                              // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"// pathName
};

static emlrtRSInfo ec_emlrtRSI{ 71,    // lineNo
  "power",                             // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\power.m"// pathName
};

static emlrtRSInfo fd_emlrtRSI{ 69,    // lineNo
  "eml_mtimes_helper",                 // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"// pathName
};

static emlrtRSInfo td_emlrtRSI{ 94,    // lineNo
  "eml_mtimes_helper",                 // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"// pathName
};

static emlrtRSInfo se_emlrtRSI{ 17,    // lineNo
  "min",                               // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"// pathName
};

static emlrtRSInfo te_emlrtRSI{ 40,    // lineNo
  "minOrMax",                          // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"// pathName
};

static emlrtRSInfo ue_emlrtRSI{ 90,    // lineNo
  "minimum",                           // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"// pathName
};

static emlrtRSInfo ve_emlrtRSI{ 223,   // lineNo
  "unaryMinOrMax",                     // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pathName
};

static emlrtRSInfo we_emlrtRSI{ 316,   // lineNo
  "unaryMinOrMaxDispatch",             // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pathName
};

static emlrtRSInfo xe_emlrtRSI{ 390,   // lineNo
  "minOrMax2D",                        // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pathName
};

static emlrtRSInfo ye_emlrtRSI{ 497,   // lineNo
  "minOrMax2DColumnMajorDim2",         // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pathName
};

static emlrtRSInfo af_emlrtRSI{ 496,   // lineNo
  "minOrMax2DColumnMajorDim2",         // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pathName
};

static emlrtRSInfo bf_emlrtRSI{ 493,   // lineNo
  "minOrMax2DColumnMajorDim2",         // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pathName
};

static emlrtRSInfo cf_emlrtRSI{ 15,    // lineNo
  "min",                               // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"// pathName
};

static emlrtRSInfo df_emlrtRSI{ 46,    // lineNo
  "minOrMax",                          // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"// pathName
};

static emlrtRSInfo ef_emlrtRSI{ 92,    // lineNo
  "minimum",                           // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"// pathName
};

static emlrtRSInfo ff_emlrtRSI{ 208,   // lineNo
  "unaryMinOrMax",                     // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pathName
};

static emlrtRSInfo gf_emlrtRSI{ 897,   // lineNo
  "minRealVectorOmitNaN",              // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pathName
};

static emlrtRSInfo hf_emlrtRSI{ 72,    // lineNo
  "vectorMinOrMaxInPlace",             // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"// pathName
};

static emlrtRSInfo if_emlrtRSI{ 64,    // lineNo
  "vectorMinOrMaxInPlace",             // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"// pathName
};

static emlrtRSInfo jf_emlrtRSI{ 130,   // lineNo
  "minOrMaxRealVectorKernel",          // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"// pathName
};

static emlrtRSInfo kf_emlrtRSI{ 39,    // lineNo
  "find",                              // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"// pathName
};

static emlrtMCInfo emlrtMCI{ 34,       // lineNo
  9,                                   // colNo
  "rng",                               // fName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"// pName
};

static emlrtRTEInfo emlrtRTEI{ 134,    // lineNo
  27,                                  // colNo
  "unaryMinOrMax",                     // fName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pName
};

static emlrtRTEInfo d_emlrtRTEI{ 79,   // lineNo
  23,                                  // colNo
  "reshapeSizeChecks",                 // fName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"// pName
};

static emlrtBCInfo emlrtBCI{ -1,       // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  38,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo b_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  212,                                 // lineNo
  37,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo c_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  211,                                 // lineNo
  37,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo d_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  178,                                 // lineNo
  42,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo e_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  173,                                 // lineNo
  36,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo f_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  86,                                  // lineNo
  31,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo g_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  81,                                  // lineNo
  36,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo h_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  230,                                 // lineNo
  42,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo i_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  47,                                  // lineNo
  37,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtRTEInfo f_emlrtRTEI{ 229,  // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtECInfo emlrtECI{ 1,        // nDims
  223,                                 // lineNo
  34,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtECInfo b_emlrtECI{ -1,     // nDims
  213,                                 // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo j_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  61,                                  // colNo
  "gamma_back",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo emlrtDCI{ 213,      // lineNo
  61,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo k_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  25,                                  // colNo
  "gamma_back",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo b_emlrtDCI{ 213,    // lineNo
  25,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtECInfo c_emlrtECI{ -1,     // nDims
  212,                                 // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo l_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  212,                                 // lineNo
  60,                                  // colNo
  "beta_back",                         // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo c_emlrtDCI{ 212,    // lineNo
  60,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo m_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  212,                                 // lineNo
  24,                                  // colNo
  "beta_back",                         // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo d_emlrtDCI{ 212,    // lineNo
  24,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo n_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  141,                                 // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo o_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  121,                                 // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo e_emlrtDCI{ 213,    // lineNo
  121,                                 // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo p_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  108,                                 // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo f_emlrtDCI{ 213,    // lineNo
  108,                                 // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo q_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  212,                                 // lineNo
  118,                                 // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo r_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  212,                                 // lineNo
  108,                                 // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo g_emlrtDCI{ 212,    // lineNo
  108,                                 // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo s_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  212,                                 // lineNo
  106,                                 // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtRTEInfo g_emlrtRTEI{ 210,  // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo h_emlrtRTEI{ 177,  // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo t_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  173,                                 // lineNo
  41,                                  // colNo
  "partitions{j}",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo u_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  173,                                 // lineNo
  39,                                  // colNo
  "partitions{j}",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtRTEInfo i_emlrtRTEI{ 172,  // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo j_emlrtRTEI{ 165,  // lineNo
  17,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo k_emlrtRTEI{ 154,  // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtDCInfo h_emlrtDCI{ 153,    // lineNo
  23,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtECInfo d_emlrtECI{ 2,      // nDims
  147,                                 // lineNo
  70,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtECInfo e_emlrtECI{ 1,      // nDims
  147,                                 // lineNo
  70,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo v_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  76,                                  // colNo
  "x",                                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo i_emlrtDCI{ 147,    // lineNo
  76,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtECInfo f_emlrtECI{ -1,     // nDims
  145,                                 // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo w_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  145,                                 // lineNo
  41,                                  // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo x_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  145,                                 // lineNo
  36,                                  // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo y_emlrtBCI{ -1,     // iFirst
  -1,                                  // iLast
  145,                                 // lineNo
  24,                                  // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtECInfo g_emlrtECI{ -1,     // nDims
  144,                                 // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo ab_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  35,                                  // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo bb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  25,                                  // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo cb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  144,                                 // lineNo
  23,                                  // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo db_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  141,                                 // lineNo
  33,                                  // colNo
  "gamma_part",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtECInfo h_emlrtECI{ 1,      // nDims
  134,                                 // lineNo
  18,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtECInfo i_emlrtECI{ 1,      // nDims
  133,                                 // lineNo
  94,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo eb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  144,                                 // colNo
  "x_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo fb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  84,                                  // colNo
  "x_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtECInfo j_emlrtECI{ 2,      // nDims
  126,                                 // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtECInfo k_emlrtECI{ 1,      // nDims
  126,                                 // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo gb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  126,                                 // lineNo
  86,                                  // colNo
  "x_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo hb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  126,                                 // lineNo
  40,                                  // colNo
  "x_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtECInfo l_emlrtECI{ 2,      // nDims
  123,                                 // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo ib_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  123,                                 // lineNo
  74,                                  // colNo
  "x_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo jb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  116,                                 // lineNo
  142,                                 // colNo
  "x_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo kb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  116,                                 // lineNo
  83,                                  // colNo
  "x_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtECInfo m_emlrtECI{ 2,      // nDims
  112,                                 // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtECInfo n_emlrtECI{ 1,      // nDims
  112,                                 // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo lb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  112,                                 // lineNo
  87,                                  // colNo
  "x_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo mb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  112,                                 // lineNo
  40,                                  // colNo
  "x_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtECInfo o_emlrtECI{ 2,      // nDims
  109,                                 // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo nb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  109,                                 // lineNo
  75,                                  // colNo
  "x_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo j_emlrtDCI{ 100,    // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo k_emlrtDCI{ 100,    // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  4                                    // checkKind
};

static emlrtDCInfo l_emlrtDCI{ 99,     // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo m_emlrtDCI{ 99,     // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  4                                    // checkKind
};

static emlrtECInfo p_emlrtECI{ 1,      // nDims
  96,                                  // lineNo
  14,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtECInfo q_emlrtECI{ 1,      // nDims
  95,                                  // lineNo
  91,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo ob_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  88,                                  // lineNo
  56,                                  // colNo
  "coefficients0",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo pb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  88,                                  // lineNo
  51,                                  // colNo
  "coefficients0",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo qb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  88,                                  // lineNo
  39,                                  // colNo
  "coefficients0",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo n_emlrtDCI{ 88,     // lineNo
  39,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo rb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  87,                                  // lineNo
  49,                                  // colNo
  "coefficients0",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo sb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  87,                                  // lineNo
  39,                                  // colNo
  "coefficients0",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo o_emlrtDCI{ 87,     // lineNo
  39,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo tb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  87,                                  // lineNo
  37,                                  // colNo
  "coefficients0",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtECInfo r_emlrtECI{ 2,      // nDims
  85,                                  // lineNo
  18,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtECInfo s_emlrtECI{ 1,      // nDims
  85,                                  // lineNo
  18,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo l_emlrtRTEI{ 79,   // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtECInfo t_emlrtECI{ -1,     // nDims
  67,                                  // lineNo
  5,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo ub_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  67,                                  // lineNo
  20,                                  // colNo
  "coefficients",                      // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtRTEInfo m_emlrtRTEI{ 66,   // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo vb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  64,                                  // lineNo
  12,                                  // colNo
  "gamma0",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtRTEInfo n_emlrtRTEI{ 46,   // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtBCInfo wb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  43,                                  // lineNo
  55,                                  // colNo
  "index",                             // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo p_emlrtDCI{ 43,     // lineNo
  55,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo xb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  43,                                  // lineNo
  45,                                  // colNo
  "index",                             // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo q_emlrtDCI{ 43,     // lineNo
  45,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtRTEInfo o_emlrtRTEI{ 41,   // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtDCInfo r_emlrtDCI{ 38,     // lineNo
  19,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo s_emlrtDCI{ 38,     // lineNo
  19,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  4                                    // checkKind
};

static emlrtDCInfo t_emlrtDCI{ 37,     // lineNo
  68,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo u_emlrtDCI{ 37,     // lineNo
  68,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  4                                    // checkKind
};

static emlrtBCInfo yb_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  167,                                 // lineNo
  28,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo v_emlrtDCI{ 50,     // lineNo
  23,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo w_emlrtDCI{ 50,     // lineNo
  23,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  4                                    // checkKind
};

static emlrtDCInfo x_emlrtDCI{ 50,     // lineNo
  42,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo y_emlrtDCI{ 51,     // lineNo
  31,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo ac_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  47,                                  // lineNo
  16,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo bc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  155,                                 // lineNo
  20,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo cc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  167,                                 // lineNo
  45,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo ab_emlrtDCI{ 119,   // lineNo
  26,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo bb_emlrtDCI{ 120,   // lineNo
  24,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo cb_emlrtDCI{ 120,   // lineNo
  33,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo dc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  173,                                 // lineNo
  20,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo ec_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  38,                                  // lineNo
  34,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo fc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  42,                                  // lineNo
  45,                                  // colNo
  "partition_lengths",                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo gc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  43,                                  // lineNo
  5,                                   // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo hc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  43,                                  // lineNo
  39,                                  // colNo
  "partitions_old{1}",                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo db_emlrtDCI{ 50,    // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo eb_emlrtDCI{ 51,    // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo ic_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  47,                                  // lineNo
  5,                                   // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo fb_emlrtDCI{ 52,    // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo gb_emlrtDCI{ 52,    // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  4                                    // checkKind
};

static emlrtDCInfo hb_emlrtDCI{ 53,    // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo ib_emlrtDCI{ 53,    // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  4                                    // checkKind
};

static emlrtDCInfo jb_emlrtDCI{ 54,    // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo kb_emlrtDCI{ 55,    // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo lb_emlrtDCI{ 228,   // lineNo
  5,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo jc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  230,                                 // lineNo
  17,                                  // colNo
  "combine",                           // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo kc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  85,                                  // lineNo
  18,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo lc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  85,                                  // lineNo
  24,                                  // colNo
  "x",                                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo mb_emlrtDCI{ 85,    // lineNo
  24,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo mc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  85,                                  // lineNo
  24,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo nc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  85,                                  // lineNo
  44,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo oc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  85,                                  // lineNo
  50,                                  // colNo
  "x",                                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo nb_emlrtDCI{ 85,    // lineNo
  50,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo pc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  85,                                  // lineNo
  50,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo qc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  86,                                  // lineNo
  20,                                  // colNo
  "y",                                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo ob_emlrtDCI{ 86,    // lineNo
  20,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtDCInfo pb_emlrtDCI{ 176,   // lineNo
  5,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo rc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  166,                                 // lineNo
  32,                                  // colNo
  "min_col_indices",                   // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo sc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  178,                                 // lineNo
  17,                                  // colNo
  "combine",                           // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo tc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  167,                                 // lineNo
  34,                                  // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo uc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  167,                                 // lineNo
  66,                                  // colNo
  "partitions_old{1}",                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo vc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  173,                                 // lineNo
  9,                                   // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo wc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  212,                                 // lineNo
  40,                                  // colNo
  "partitions{j}",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo xc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  212,                                 // lineNo
  74,                                  // colNo
  "partitions{j}",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo yc_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  109,                                 // lineNo
  37,                                  // colNo
  "y_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo ad_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  41,                                  // colNo
  "partitions{j}",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo bd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  213,                                 // lineNo
  75,                                  // colNo
  "partitions{j}",                     // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo cd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  94,                                  // colNo
  "partitions_old{1}",                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo qb_emlrtDCI{ 119,   // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo dd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  103,                                 // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo ed_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  109,                                 // colNo
  "x",                                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo rb_emlrtDCI{ 147,   // lineNo
  109,                                 // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo fd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  109,                                 // colNo
  "partitions",                        // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo sb_emlrtDCI{ 120,   // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo gd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  123,                                 // lineNo
  37,                                  // colNo
  "y_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo hd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  116,                                 // lineNo
  55,                                  // colNo
  "y_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo id_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  116,                                 // lineNo
  114,                                 // colNo
  "y_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo jd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  36,                                  // colNo
  "y",                                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtDCInfo tb_emlrtDCI{ 147,   // lineNo
  36,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  1                                    // checkKind
};

static emlrtBCInfo kd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  54,                                  // colNo
  "partitions_old{1}",                 // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo ld_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  23,                                  // colNo
  "residuals",                         // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo md_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  147,                                 // lineNo
  25,                                  // colNo
  "residuals",                         // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo nd_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  55,                                  // colNo
  "y_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtBCInfo od_emlrtBCI{ -1,    // iFirst
  -1,                                  // iLast
  130,                                 // lineNo
  115,                                 // colNo
  "y_part",                            // aName
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m",                // pName
  0                                    // checkKind
};

static emlrtRTEInfo db_emlrtRTEI{ 13,  // lineNo
  9,                                   // colNo
  "sqrt",                              // fName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"// pName
};

static emlrtRTEInfo eb_emlrtRTEI{ 14,  // lineNo
  9,                                   // colNo
  "log",                               // fName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\elfun\\log.m"// pName
};

static emlrtRTEInfo fb_emlrtRTEI{ 37,  // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo gb_emlrtRTEI{ 2,   // lineNo
  49,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo hb_emlrtRTEI{ 38,  // lineNo
  34,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo ib_emlrtRTEI{ 43,  // lineNo
  5,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo jb_emlrtRTEI{ 47,  // lineNo
  5,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo kb_emlrtRTEI{ 47,  // lineNo
  26,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo lb_emlrtRTEI{ 50,  // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo mb_emlrtRTEI{ 51,  // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo nb_emlrtRTEI{ 52,  // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo ob_emlrtRTEI{ 53,  // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo pb_emlrtRTEI{ 54,  // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo qb_emlrtRTEI{ 55,  // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo rb_emlrtRTEI{ 31,  // lineNo
  30,                                  // colNo
  "unsafeSxfun",                       // fName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unsafeSxfun.m"// pName
};

static emlrtRTEInfo sb_emlrtRTEI{ 67,  // lineNo
  25,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo tb_emlrtRTEI{ 69,  // lineNo
  1,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo ub_emlrtRTEI{ 228, // lineNo
  5,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo vb_emlrtRTEI{ 85,  // lineNo
  18,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo wb_emlrtRTEI{ 85,  // lineNo
  44,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo xb_emlrtRTEI{ 85,  // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo yb_emlrtRTEI{ 86,  // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo ac_emlrtRTEI{ 87,  // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo bc_emlrtRTEI{ 88,  // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo cc_emlrtRTEI{ 89,  // lineNo
  30,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo dc_emlrtRTEI{ 74,  // lineNo
  9,                                   // colNo
  "eml_mtimes_helper",                 // fName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"// pName
};

static emlrtRTEInfo ec_emlrtRTEI{ 89,  // lineNo
  53,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo fc_emlrtRTEI{ 93,  // lineNo
  44,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo gc_emlrtRTEI{ 95,  // lineNo
  91,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo hc_emlrtRTEI{ 96,  // lineNo
  14,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo ic_emlrtRTEI{ 147, // lineNo
  103,                                 // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo jc_emlrtRTEI{ 147, // lineNo
  70,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo kc_emlrtRTEI{ 105, // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo lc_emlrtRTEI{ 106, // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo mc_emlrtRTEI{ 109, // lineNo
  64,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo nc_emlrtRTEI{ 109, // lineNo
  17,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo oc_emlrtRTEI{ 112, // lineNo
  76,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo pc_emlrtRTEI{ 112, // lineNo
  29,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo qc_emlrtRTEI{ 112, // lineNo
  27,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo rc_emlrtRTEI{ 114, // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo sc_emlrtRTEI{ 116, // lineNo
  72,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo tc_emlrtRTEI{ 116, // lineNo
  131,                                 // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo uc_emlrtRTEI{ 119, // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo vc_emlrtRTEI{ 120, // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo wc_emlrtRTEI{ 123, // lineNo
  63,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo xc_emlrtRTEI{ 123, // lineNo
  17,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo yc_emlrtRTEI{ 126, // lineNo
  29,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo ad_emlrtRTEI{ 126, // lineNo
  75,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo bd_emlrtRTEI{ 126, // lineNo
  27,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo cd_emlrtRTEI{ 128, // lineNo
  13,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo dd_emlrtRTEI{ 130, // lineNo
  73,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo ed_emlrtRTEI{ 130, // lineNo
  133,                                 // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo fd_emlrtRTEI{ 133, // lineNo
  94,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo gd_emlrtRTEI{ 134, // lineNo
  18,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo hd_emlrtRTEI{ 155, // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo id_emlrtRTEI{ 485, // lineNo
  21,                                  // colNo
  "unaryMinOrMax",                     // fName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pName
};

static emlrtRTEInfo jd_emlrtRTEI{ 487, // lineNo
  5,                                   // colNo
  "unaryMinOrMax",                     // fName
  "D:\\MATLAB2023A\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"// pName
};

static emlrtRTEInfo kd_emlrtRTEI{ 18,  // lineNo
  5,                                   // colNo
  "min",                               // fName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"// pName
};

static emlrtRTEInfo ld_emlrtRTEI{ 167, // lineNo
  34,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo md_emlrtRTEI{ 173, // lineNo
  25,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo nd_emlrtRTEI{ 173, // lineNo
  9,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo od_emlrtRTEI{ 176, // lineNo
  5,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo pd_emlrtRTEI{ 181, // lineNo
  30,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo qd_emlrtRTEI{ 223, // lineNo
  34,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo rd_emlrtRTEI{ 223, // lineNo
  57,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo sd_emlrtRTEI{ 224, // lineNo
  5,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo td_emlrtRTEI{ 225, // lineNo
  5,                                   // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo te_emlrtRTEI{ 109, // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRTEInfo ue_emlrtRTEI{ 112, // lineNo
  22,                                  // colNo
  "k_means_regression_tree_single",    // fName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pName
};

static emlrtRSInfo of_emlrtRSI{ 34,    // lineNo
  "rng",                               // fcnName
  "D:\\MATLAB2023A\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"// pathName
};

static emlrtRSInfo rf_emlrtRSI{ 223,   // lineNo
  "k_means_regression_tree_single",    // fcnName
  "D:\\MATLAB_Document\\ADMM_BCD_new\\\xe5\x9f\xba\xe4\xba\x8e\xe5\x88\x9d\xe5\x80\xbc\xe6\x90\x9c\xe7\xb4\xa2\xe7\xae\x97\xe6\xb3\x95"
  "\xe7\x9a\x84\xe5\xbc\x82\xe8\xb4\xa8\xe7\x9f\xa9\xe9\x98\xb5\xe5\x9b\x9e\xe5\xbd\x92\xe6\xa8\xa1\xe5\x9e\x8b_new\\k_means_regres"
  "sion_tree_single.m"                 // pathName
};

// Function Declarations
static void b_plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1, const
                   coder::array<real_T, 2U> &in2);
static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
  const coder::array<real_T, 1U> &in2, const emlrtRSInfo in3);
static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
  const coder::array<real_T, 3U> &in2, const cell_wrap_0 &in3, int32_T in4);
static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 3U> &in1,
  const coder::array<real_T, 2U> &in2);
static real_T binary_expand_op(const emlrtStack &sp, const coder::array<real_T,
  1U> &in1, const coder::array<real_T, 1U> &in2);
static void plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1, const
                 coder::array<real_T, 2U> &in2);
static void rng(const emlrtStack &sp, const mxArray *m, emlrtMCInfo &location);

// Function Definitions
static void b_plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1, const
                   coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }

  if (in2.size(1) == 1) {
    b_loop_ub = in1.size(1);
  } else {
    b_loop_ub = in2.size(1);
  }

  b_in1.set_size(&ue_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_0 = (in2.size(0) != 1);
  stride_1_1 = (in2.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] = in1[i1 * stride_0_0 + in1.size(0) *
        aux_0_1] + in2[i1 * stride_1_0 + in2.size(0) * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  in1.set_size(&ue_emlrtRTEI, &sp, b_in1.size(0), b_in1.size(1));
  loop_ub = b_in1.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_loop_ub = b_in1.size(0);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
  const coder::array<real_T, 1U> &in2, const emlrtRSInfo in3)
{
  coder::array<real_T, 1U> b_in2;
  emlrtStack st;
  real_T d;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = const_cast<emlrtRSInfo *>(&in3);
  d = coder::mean(st, in2);
  if (in1.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in1.size(0);
  }

  b_in2.set_size(&gd_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in2[i] = (in2[i * stride_0_0] - d) - in1[i * stride_1_0];
  }

  in1.set_size(&gd_emlrtRTEI, &sp, b_in2.size(0));
  loop_ub = b_in2.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
  const coder::array<real_T, 3U> &in2, const cell_wrap_0 &in3, int32_T in4)
{
  coder::array<real_T, 2U> b_in2;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_in3;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  b_in3 = static_cast<int32_T>(in3.f1[in4]);
  if (in1.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in1.size(0);
  }

  if (in1.size(1) == 1) {
    b_loop_ub = in2.size(1);
  } else {
    b_loop_ub = in1.size(1);
  }

  b_in2.set_size(&jc_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_0 = (in1.size(0) != 1);
  stride_1_1 = (in1.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in2[i1 + b_in2.size(0) * i] = in2[(i1 * stride_0_0 + in2.size(0) *
        aux_0_1) + in2.size(0) * in2.size(1) * (b_in3 - 1)] - in1[i1 *
        stride_1_0 + in1.size(0) * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  in1.set_size(&jc_emlrtRTEI, &sp, b_in2.size(0), b_in2.size(1));
  loop_ub = b_in2.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_loop_ub = b_in2.size(0);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in2[i1 + b_in2.size(0) * i];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op(const emlrtStack &sp, coder::array<real_T, 3U> &in1,
  const coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 3U> b_in1;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T in2_idx_0;
  int32_T in2_idx_1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  in2_idx_0 = in2.size(0);
  in2_idx_1 = in2.size(1);
  if (in2_idx_0 == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2_idx_0;
  }

  if (in2_idx_1 == 1) {
    b_loop_ub = in1.size(1);
  } else {
    b_loop_ub = in2_idx_1;
  }

  b_in1.set_size(&vb_emlrtRTEI, &sp, loop_ub, b_loop_ub, in1.size(2));
  stride_0_0 = (in1.size(0) != 1);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_0 = (in2_idx_0 != 1);
  in2_idx_1 = (in2_idx_1 != 1);
  c_loop_ub = in1.size(2);
  for (int32_T i{0}; i < c_loop_ub; i++) {
    int32_T aux_0_1;
    int32_T aux_1_1;
    aux_0_1 = 0;
    aux_1_1 = 0;
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      for (int32_T i2{0}; i2 < loop_ub; i2++) {
        b_in1[(i2 + b_in1.size(0) * i1) + b_in1.size(0) * b_in1.size(1) * i] =
          in1[(i2 * stride_0_0 + in1.size(0) * aux_0_1) + in1.size(0) * in1.size
          (1) * i] - in2[i2 * stride_1_0 + in2_idx_0 * aux_1_1];
      }

      aux_1_1 += in2_idx_1;
      aux_0_1 += stride_0_1;
    }
  }

  in1.set_size(&vb_emlrtRTEI, &sp, b_in1.size(0), b_in1.size(1), b_in1.size(2));
  loop_ub = b_in1.size(2);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_loop_ub = b_in1.size(1);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      c_loop_ub = b_in1.size(0);
      for (int32_T i2{0}; i2 < c_loop_ub; i2++) {
        in1[(i2 + in1.size(0) * i1) + in1.size(0) * in1.size(1) * i] = b_in1[(i2
          + b_in1.size(0) * i1) + b_in1.size(0) * b_in1.size(1) * i];
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static real_T binary_expand_op(const emlrtStack &sp, const coder::array<real_T,
  1U> &in1, const coder::array<real_T, 1U> &in2)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  coder::array<real_T, 1U> b_in1;
  real_T out1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }

  b_in1.set_size(&qd_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] - in2[i * stride_1_0];
  }

  if (b_in1.size(0) == 0) {
    out1 = 0.0;
  } else {
    n_t = (ptrdiff_t)b_in1.size(0);
    incx_t = (ptrdiff_t)1;
    out1 = dnrm2(&n_t, &(b_in1.data())[0], &incx_t);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
  return out1;
}

static void plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1, const
                 coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(1) == 1) {
    loop_ub = in1.size(1);
  } else {
    loop_ub = in2.size(1);
  }

  b_in1.set_size(&te_emlrtRTEI, &sp, 1, loop_ub);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_1 = (in2.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_1] + in2[i * stride_1_1];
  }

  in1.set_size(&te_emlrtRTEI, &sp, 1, b_in1.size(1));
  loop_ub = b_in1.size(1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void rng(const emlrtStack &sp, const mxArray *m, emlrtMCInfo &location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 0, nullptr, 1, &pArray, "rng", true,
                        &location);
}

void k_means_regression_tree_single(const emlrtStack *sp, real_T num_partitions,
  real_T eps_initial, real_T eps_out, real_T iter_max_initial_in, real_T
  iter_max_initial_out, real_T, real_T row_size, real_T col_size, const coder::
  array<real_T, 3U> &x, const coder::array<real_T, 1U> &y, real_T random_number,
  const coder::array<real_T, 1U> &beta0, coder::array<real_T, 1U> &gamma0, const
  cell_wrap_0 partitions_old[1], real_T sample_size_sum, coder::array<real_T, 1U>
  &beta_back, coder::array<real_T, 1U> &gamma_back, coder::array<real_T, 2U>
  &coefficients, coder::array<cell_wrap_0, 1U> &partitions, coder::array<real_T,
  1U> &combine, real_T *residual_coefficients)
{
  coder::array<real_T, 3U> c_x;
  coder::array<real_T, 3U> x_part;
  coder::array<real_T, 2U> M2;
  coder::array<real_T, 2U> b_index;
  coder::array<real_T, 2U> b_y;
  coder::array<real_T, 2U> beta_likelihood;
  coder::array<real_T, 2U> c_y;
  coder::array<real_T, 2U> coefficients0;
  coder::array<real_T, 2U> d_x;
  coder::array<real_T, 2U> partition_lengths;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> residuals;
  coder::array<real_T, 1U> b;
  coder::array<real_T, 1U> b_partitions;
  coder::array<real_T, 1U> beta0_part;
  coder::array<real_T, 1U> beta_back0;
  coder::array<real_T, 1U> gamma0_part;
  coder::array<real_T, 1U> gamma_back0;
  coder::array<real_T, 1U> y_part;
  coder::array<int32_T, 1U> idx;
  coder::array<int32_T, 1U> sf_emlrtRSI;
  coder::array<boolean_T, 1U> b_combine;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  real_T d;
  real_T d1;
  real_T d2;
  real_T end_idx;
  real_T iter_initial_in;
  real_T iter_initial_out;
  real_T start_idx;
  real_T varargin_1;
  real_T *b_x;
  int32_T b_partitions_old;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T loop_ub;
  int32_T maxdimlen;
  int32_T nx;
  int32_T sample_size;
  int32_T unnamed_idx_0_tmp_tmp_tmp;
  int32_T vectorUB_tmp;
  st.prev = sp;
  st.tls = sp->tls;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);

  // -------------------------------------------函数功能-----------------------------------------------%
  //  对于任意给定的 partitions_old（为一组的索引值），可以进行二分裂，利用残差迭代算法进行求解
  //  得到分裂后的分组 coefficients 和对应的分组索引 partitions。
  //  需要注意的是 partitions_old 需要的格式为：partitions_old = cell(1,1);partitions_old{1} = partitions{k};
  // -----------------------------------------输出变量说明---------------------------------------------%
  //  beta_back             一棵二叉树模型返回的行向量取值 [row_size*sample_size] matrix
  //  gamma_back            一颗二叉树模型返回的列向量取值 [col_size*sample_size] matrix
  //  coefficients          一棵二叉树模型返回的两个模型分别的回归系数值 [(row_size+col_size)*2] matrix
  //  partitions            一棵二叉树模型返回的两个模型的分组索引（相对于原始的x、y的分组索引）[2*1] cell
  //  combine               一棵二叉树模型返回的两个模型对应的样本数量 [2*1] matrix
  // -----------------------------------------输入变量说明---------------------------------------------%
  //  num_partitions        将数据分成几份 默认取2
  //  eps_initial           每次进行同质模型回归时，每个模型收敛的精度
  //  iter_max_initial_in   每次进行同质模型回归时，交替优化的最大步数上限
  //  eps_out               第 n 次与第 n-1 次样本重新划分后模型的系数差精度，收敛精度
  //  iter_max_initial_out  样本重新划分的最大次数上限
  //  sample_size           样本量
  //  row_size              行向量维数
  //  col_size              列向量维数
  //  x                     一次模拟中的解释变量[row_size*col_size*sample_size]
  //  y                     一次模拟中的响应变量[sample_size*1]
  //  random_number         随机种子数，确保结果可重现
  //  beta0                 每次同质模型计算时关于beta的初值
  //  gamma0                每次同质模型计算时关于gamma的初值
  //  combine_principle     c*sample_size; 最小元素个数组合并准则
  //  sample_size_sum       总的样本数
  //  partitions_old        待分裂的索引值
  st.site = &emlrtRSI;
  b_st.site = &of_emlrtRSI;
  rng(b_st, emlrt_marshallOut(random_number), emlrtMCI);
  sample_size = partitions_old[0].f1.size(1) - 1;

  // %%%%%%%修改sample_size
  // partitions_old{1}
  st.site = &b_emlrtRSI;
  coder::randperm(st, static_cast<real_T>(partitions_old[0].f1.size(1)), b_index);
  start_idx = muDoubleScalarFloor(static_cast<real_T>(partitions_old[0].f1.size
    (1)) / num_partitions);
  if (!(num_partitions - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(num_partitions - 1.0, &u_emlrtDCI,
      (emlrtConstCTX)sp);
  }

  if (num_partitions - 1.0 != static_cast<int32_T>(muDoubleScalarFloor
       (num_partitions - 1.0))) {
    emlrtIntegerCheckR2012b(num_partitions - 1.0, &t_emlrtDCI, (emlrtConstCTX)sp);
  }

  partition_lengths.set_size(&fb_emlrtRTEI, sp, 1, static_cast<int32_T>
    (num_partitions - 1.0) + 1);
  maxdimlen = static_cast<int32_T>(num_partitions - 1.0);
  for (i = 0; i < maxdimlen; i++) {
    partition_lengths[i] = start_idx;
  }

  partition_lengths[static_cast<int32_T>(num_partitions - 1.0)] =
    static_cast<real_T>(partitions_old[0].f1.size(1)) - start_idx *
    (num_partitions - 1.0);
  if (!(num_partitions >= 0.0)) {
    emlrtNonNegativeCheckR2012b(num_partitions, &s_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = static_cast<int32_T>(muDoubleScalarFloor(num_partitions));
  if (num_partitions != i) {
    emlrtIntegerCheckR2012b(num_partitions, &r_emlrtDCI, (emlrtConstCTX)sp);
  }

  unnamed_idx_0_tmp_tmp_tmp = static_cast<int32_T>(num_partitions);
  partitions.set_size(&gb_emlrtRTEI, sp, unnamed_idx_0_tmp_tmp_tmp);
  for (i1 = 0; i1 < unnamed_idx_0_tmp_tmp_tmp; i1++) {
    if (i1 > partitions.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, partitions.size(0) - 1, &ec_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    partitions[i1].f1.set_size(&gb_emlrtRTEI, sp, 1, partitions[i1].f1.size(1));
    if (i1 > partitions.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(i1, 0, partitions.size(0) - 1, &ec_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    partitions[i1].f1.set_size(&gb_emlrtRTEI, sp, partitions[i1].f1.size(0), 0);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%计算分组后的索引
  start_idx = 1.0;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, num_partitions, mxDOUBLE_CLASS,
    static_cast<int32_T>(num_partitions), &o_emlrtRTEI, (emlrtConstCTX)sp);
  partitions.set_size(&hb_emlrtRTEI, sp, unnamed_idx_0_tmp_tmp_tmp);
  if (static_cast<int32_T>(num_partitions) - 1 >= 0) {
    b_partitions_old = partitions_old[0].f1.size(1);
  }

  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp_tmp; b_i++) {
    if ((static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) < 1) || (
         static_cast<int32_T>(static_cast<uint32_T>(b_i) + 1U) >
         partition_lengths.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(static_cast<uint32_T>
        (b_i) + 1U), 1, partition_lengths.size(1), &fc_emlrtBCI, (emlrtConstCTX)
        sp);
    }

    end_idx = (start_idx + partition_lengths[b_i]) - 1.0;
    if (start_idx > end_idx) {
      i1 = 0;
      i2 = 0;
    } else {
      if (start_idx != static_cast<int32_T>(muDoubleScalarFloor(start_idx))) {
        emlrtIntegerCheckR2012b(start_idx, &q_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((static_cast<int32_T>(start_idx) < 1) || (static_cast<int32_T>
           (start_idx) > b_index.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(start_idx), 1,
          b_index.size(1), &xb_emlrtBCI, (emlrtConstCTX)sp);
      }

      i1 = static_cast<int32_T>(start_idx) - 1;
      if (end_idx != static_cast<int32_T>(muDoubleScalarFloor(end_idx))) {
        emlrtIntegerCheckR2012b(end_idx, &p_emlrtDCI, (emlrtConstCTX)sp);
      }

      if ((static_cast<int32_T>(end_idx) < 1) || (static_cast<int32_T>(end_idx) >
           b_index.size(1))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(end_idx), 1,
          b_index.size(1), &wb_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = static_cast<int32_T>(end_idx);
    }

    i3 = partitions.size(0) - 1;
    if (b_i > partitions.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1, &gc_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    partitions[b_i].f1.set_size(&ib_emlrtRTEI, sp, 1, partitions[b_i].f1.size(1));
    if (b_i > partitions.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1, &gc_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    loop_ub = i2 - i1;
    partitions[b_i].f1.set_size(&ib_emlrtRTEI, sp, partitions[b_i].f1.size(0),
      loop_ub);
    for (i2 = 0; i2 < loop_ub; i2++) {
      vectorUB_tmp = static_cast<int32_T>(b_index[i1 + i2]);
      if ((vectorUB_tmp < 1) || (vectorUB_tmp > b_partitions_old)) {
        emlrtDynamicBoundsCheckR2012b(vectorUB_tmp, 1, b_partitions_old,
          &hc_emlrtBCI, (emlrtConstCTX)sp);
      }

      if (b_i > i3) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i3, &gc_emlrtBCI, (emlrtConstCTX)
          sp);
      }

      partitions[b_i].f1[i2] = partitions_old[0].f1[vectorUB_tmp - 1];
    }

    start_idx = end_idx + 1.0;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  emlrtForLoopVectorCheckR2021a(1.0, 1.0, num_partitions, mxDOUBLE_CLASS,
    static_cast<int32_T>(num_partitions), &n_emlrtRTEI, (emlrtConstCTX)sp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp_tmp; b_i++) {
    st.site = &c_emlrtRSI;
    i1 = partitions.size(0) - 1;
    if (b_i > partitions.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1, &i_emlrtBCI,
        &st);
    }

    loop_ub = partitions[b_i].f1.size(1);
    if (b_i > partitions.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1, &ac_emlrtBCI,
        &st);
    }

    partitions[b_i].f1.set_size(&jb_emlrtRTEI, &st, 1, partitions[b_i].f1.size(1));
    if (b_i > partitions.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1, &ac_emlrtBCI,
        &st);
    }

    b_partitions.set_size(&kb_emlrtRTEI, &st, loop_ub);
    for (i2 = 0; i2 < loop_ub; i2++) {
      b_partitions[i2] = partitions[b_i].f1[i2];
    }

    loop_ub = b_partitions.size(0);
    for (i2 = 0; i2 < loop_ub; i2++) {
      if (b_i > i1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &ic_emlrtBCI, &st);
      }

      partitions[b_i].f1[i2] = b_partitions[i2];
    }

    if (b_i > partitions.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1, &ac_emlrtBCI,
        &st);
    }

    b_st.site = &jb_emlrtRSI;
    coder::internal::sort(b_st, partitions[b_i].f1);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  d = row_size + col_size;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &w_emlrtDCI, (emlrtConstCTX)sp);
  }

  d1 = static_cast<int32_T>(muDoubleScalarFloor(d));
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &v_emlrtDCI, (emlrtConstCTX)sp);
  }

  coefficients.set_size(&lb_emlrtRTEI, sp, static_cast<int32_T>(d),
                        coefficients.size(1));
  if (num_partitions != i) {
    emlrtIntegerCheckR2012b(num_partitions, &x_emlrtDCI, (emlrtConstCTX)sp);
  }

  coefficients.set_size(&lb_emlrtRTEI, sp, coefficients.size(0), static_cast<
                        int32_T>(num_partitions));
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &db_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (static_cast<int32_T>(num_partitions) != i) {
    emlrtIntegerCheckR2012b(num_partitions, &db_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub = static_cast<int32_T>(d) * static_cast<int32_T>(num_partitions);
  for (i1 = 0; i1 < loop_ub; i1++) {
    coefficients[i1] = 0.0;
  }

  // 系数存储矩阵
  residuals.set_size(&mb_emlrtRTEI, sp, partitions_old[0].f1.size(1),
                     residuals.size(1));
  if (static_cast<int32_T>(num_partitions) != i) {
    emlrtIntegerCheckR2012b(num_partitions, &y_emlrtDCI, (emlrtConstCTX)sp);
  }

  residuals.set_size(&mb_emlrtRTEI, sp, residuals.size(0), static_cast<int32_T>
                     (num_partitions));
  if (static_cast<int32_T>(num_partitions) != i) {
    emlrtIntegerCheckR2012b(num_partitions, &eb_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub = partitions_old[0].f1.size(1) * static_cast<int32_T>(num_partitions);
  for (i1 = 0; i1 < loop_ub; i1++) {
    residuals[i1] = 0.0;
  }

  // 残差存储矩阵
  d2 = sample_size_sum * row_size;
  if (!(d2 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d2, &gb_emlrtDCI, (emlrtConstCTX)sp);
  }

  end_idx = static_cast<int32_T>(muDoubleScalarFloor(d2));
  if (d2 != end_idx) {
    emlrtIntegerCheckR2012b(d2, &fb_emlrtDCI, (emlrtConstCTX)sp);
  }

  beta_back.set_size(&nb_emlrtRTEI, sp, static_cast<int32_T>(d2));
  if (d2 != end_idx) {
    emlrtIntegerCheckR2012b(d2, &fb_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub = static_cast<int32_T>(d2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    beta_back[i1] = 0.0;
  }

  // 返回初值结果
  iter_initial_in = sample_size_sum * col_size;
  if (!(iter_initial_in >= 0.0)) {
    emlrtNonNegativeCheckR2012b(iter_initial_in, &ib_emlrtDCI, (emlrtConstCTX)sp);
  }

  start_idx = static_cast<int32_T>(muDoubleScalarFloor(iter_initial_in));
  if (iter_initial_in != start_idx) {
    emlrtIntegerCheckR2012b(iter_initial_in, &hb_emlrtDCI, (emlrtConstCTX)sp);
  }

  gamma_back.set_size(&ob_emlrtRTEI, sp, static_cast<int32_T>(iter_initial_in));
  if (iter_initial_in != start_idx) {
    emlrtIntegerCheckR2012b(iter_initial_in, &hb_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub = static_cast<int32_T>(iter_initial_in);
  for (i1 = 0; i1 < loop_ub; i1++) {
    gamma_back[i1] = 0.0;
  }

  // 返回初值结果
  if (d2 != end_idx) {
    emlrtIntegerCheckR2012b(d2, &jb_emlrtDCI, (emlrtConstCTX)sp);
  }

  beta_back0.set_size(&pb_emlrtRTEI, sp, static_cast<int32_T>(d2));
  if (d2 != end_idx) {
    emlrtIntegerCheckR2012b(d2, &jb_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub = static_cast<int32_T>(d2);
  for (i1 = 0; i1 < loop_ub; i1++) {
    beta_back0[i1] = 0.0;
  }

  // 返回初值结果
  if (iter_initial_in != start_idx) {
    emlrtIntegerCheckR2012b(iter_initial_in, &kb_emlrtDCI, (emlrtConstCTX)sp);
  }

  gamma_back0.set_size(&qb_emlrtRTEI, sp, static_cast<int32_T>(iter_initial_in));
  if (iter_initial_in != start_idx) {
    emlrtIntegerCheckR2012b(iter_initial_in, &kb_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub = static_cast<int32_T>(iter_initial_in);
  for (i1 = 0; i1 < loop_ub; i1++) {
    gamma_back0[i1] = 0.0;
  }

  // 返回初值结果
  *residual_coefficients = 1.0;

  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%初始值随机化机制
  // beta0 = rand(row_size,1);
  // gamma0 = (1/sqrt(col_size))*rand(col_size,1);
  // beta0 = beta_real(1:row_size)
  // gamma0 = gamma_real(1:col_size)
  // beta0 = 50+ones(row_size,1)
  i1 = partitions_old[0].f1.size(1);
  for (int32_T b_i{0}; b_i < i1; b_i++) {
    if (gamma0.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, gamma0.size(0), &vb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    st.site = &d_emlrtRSI;
    b_st.site = &ec_emlrtRSI;
    b_partitions.set_size(&rb_emlrtRTEI, sp, gamma0.size(0));
    loop_ub = gamma0.size(0);
    for (i2 = 0; i2 < loop_ub; i2++) {
      varargin_1 = gamma0[i2];
      b_partitions[i2] = varargin_1 * varargin_1;
    }

    st.site = &d_emlrtRSI;
    gamma0[0] = 1.0 - coder::sum(st, b_partitions);
    st.site = &d_emlrtRSI;
    b_x = &(gamma0.data())[0];
    if (*b_x < 0.0) {
      emlrtErrorWithMessageIdR2018a(&st, &db_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    *b_x = muDoubleScalarSqrt(*b_x);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  emlrtForLoopVectorCheckR2021a(1.0, 1.0, num_partitions, mxDOUBLE_CLASS,
    static_cast<int32_T>(num_partitions), &m_emlrtRTEI, (emlrtConstCTX)sp);
  for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp_tmp; b_i++) {
    if ((b_i + 1 < 1) || (b_i + 1 > coefficients.size(1))) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, coefficients.size(1),
        &ub_emlrtBCI, (emlrtConstCTX)sp);
    }

    loop_ub = beta0.size(0);
    b_partitions.set_size(&sb_emlrtRTEI, sp, beta0.size(0) + gamma0.size(0));
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_partitions[i1] = beta0[i1];
    }

    loop_ub = gamma0.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_partitions[i1 + beta0.size(0)] = gamma0[i1];
    }

    emlrtSubAssignSizeCheckR2012b(coefficients.size(), 1, b_partitions.size(), 1,
      &t_emlrtECI, (emlrtCTX)sp);
    loop_ub = b_partitions.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      coefficients[i1 + coefficients.size(0) * b_i] = b_partitions[i1];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  coefficients0.set_size(&tb_emlrtRTEI, sp, coefficients.size(0),
    coefficients.size(1));
  loop_ub = coefficients.size(0) * coefficients.size(1);
  for (i1 = 0; i1 < loop_ub; i1++) {
    coefficients0[i1] = coefficients[i1];
  }

  // 每次重新分配样本后回归时使用的初值，不使用warm start
  // partitions{1}=1:50 %验证理想情况下的解离真值距离，效果很好
  // partitions{2}=51:100 %验证理想情况下的解离真值距离，效果很好
  // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  iter_initial_out = 0.0;
  while ((*residual_coefficients > eps_out) && (iter_initial_out <=
          iter_max_initial_out)) {
    __m128d r1;
    __m128d r2;
    int32_T scalarLB_tmp;
    int32_T vectorUB;
    boolean_T out;

    // z = cell(num_partitions,1);%@@@@@@@@@@@@@
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, num_partitions, mxDOUBLE_CLASS,
      static_cast<int32_T>(num_partitions), &l_emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp_tmp; b_i++) {
      int32_T n_part;
      iter_initial_in = 0.0;
      i1 = partitions.size(0) - 1;
      if (b_i > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1,
          &g_emlrtBCI, (emlrtConstCTX)sp);
      }

      n_part = partitions[b_i].f1.size(1) - 1;
      i2 = partitions[b_i].f1.size(1);
      if (!(i2 < 0.05 * sample_size_sum)) {
        real_T log_likelihood0;
        real_T mu;
        real_T sigma2;
        int32_T iv[2];
        int32_T b_loop_ub;
        x_part.set_size(&vb_emlrtRTEI, sp, x.size(0), x.size(1), x_part.size(2));
        if (b_i > partitions.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1,
            &kc_emlrtBCI, (emlrtConstCTX)sp);
        }

        x_part.set_size(&vb_emlrtRTEI, sp, x_part.size(0), x_part.size(1),
                        partitions[b_i].f1.size(1));
        if (b_i > partitions.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1,
            &kc_emlrtBCI, (emlrtConstCTX)sp);
        }

        loop_ub = partitions[b_i].f1.size(1);
        for (i3 = 0; i3 < loop_ub; i3++) {
          b_loop_ub = x.size(1);
          for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
            nx = x.size(0);
            for (b_partitions_old = 0; b_partitions_old < nx; b_partitions_old++)
            {
              if (b_i > i1) {
                emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &mc_emlrtBCI,
                  (emlrtConstCTX)sp);
              }

              d2 = partitions[b_i].f1[i3];
              if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
                emlrtIntegerCheckR2012b(d2, &mb_emlrtDCI, (emlrtConstCTX)sp);
              }

              if ((static_cast<int32_T>(d2) < 1) || (static_cast<int32_T>(d2) >
                   x.size(2))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
                  x.size(2), &lc_emlrtBCI, (emlrtConstCTX)sp);
              }

              x_part[(b_partitions_old + x_part.size(0) * vectorUB_tmp) +
                x_part.size(0) * x_part.size(1) * i3] = x[(b_partitions_old +
                x.size(0) * vectorUB_tmp) + x.size(0) * x.size(1) * (
                static_cast<int32_T>(d2) - 1)];
            }
          }
        }

        c_x.set_size(&wb_emlrtRTEI, sp, x.size(0), x.size(1), c_x.size(2));
        if (b_i > partitions.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1,
            &nc_emlrtBCI, (emlrtConstCTX)sp);
        }

        c_x.set_size(&wb_emlrtRTEI, sp, c_x.size(0), c_x.size(1), partitions[b_i]
                     .f1.size(1));
        if (b_i > partitions.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1,
            &nc_emlrtBCI, (emlrtConstCTX)sp);
        }

        loop_ub = partitions[b_i].f1.size(1);
        for (i3 = 0; i3 < loop_ub; i3++) {
          b_loop_ub = x.size(1);
          for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
            nx = x.size(0);
            for (b_partitions_old = 0; b_partitions_old < nx; b_partitions_old++)
            {
              if (b_i > i1) {
                emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &pc_emlrtBCI,
                  (emlrtConstCTX)sp);
              }

              d2 = partitions[b_i].f1[i3];
              if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
                emlrtIntegerCheckR2012b(d2, &nb_emlrtDCI, (emlrtConstCTX)sp);
              }

              if ((static_cast<int32_T>(d2) < 1) || (static_cast<int32_T>(d2) >
                   x.size(2))) {
                emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
                  x.size(2), &oc_emlrtBCI, (emlrtConstCTX)sp);
              }

              c_x[(b_partitions_old + c_x.size(0) * vectorUB_tmp) + c_x.size(0) *
                c_x.size(1) * i3] = x[(b_partitions_old + x.size(0) *
                vectorUB_tmp) + x.size(0) * x.size(1) * (static_cast<int32_T>(d2)
                - 1)];
            }
          }
        }

        st.site = &e_emlrtRSI;
        coder::mean(st, c_x, r);
        if ((x.size(0) != r.size(0)) && ((x.size(0) != 1) && (r.size(0) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(x.size(0), r.size(0), &s_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((x.size(1) != r.size(1)) && ((x.size(1) != 1) && (r.size(1) != 1)))
        {
          emlrtDimSizeImpxCheckR2021b(x.size(1), r.size(1), &r_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if ((x_part.size(0) == r.size(0)) && (x_part.size(1) == r.size(1))) {
          maxdimlen = r.size(0);
          c_x.set_size(&vb_emlrtRTEI, sp, x_part.size(0), x_part.size(1),
                       x_part.size(2));
          loop_ub = x_part.size(2);
          for (i3 = 0; i3 < loop_ub; i3++) {
            b_loop_ub = x_part.size(1);
            for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
              nx = x_part.size(0);
              for (b_partitions_old = 0; b_partitions_old < nx; b_partitions_old
                   ++) {
                c_x[(b_partitions_old + c_x.size(0) * vectorUB_tmp) + c_x.size(0)
                  * c_x.size(1) * i3] = x_part[(b_partitions_old + x_part.size(0)
                  * vectorUB_tmp) + x_part.size(0) * x_part.size(1) * i3] -
                  r[b_partitions_old + maxdimlen * vectorUB_tmp];
              }
            }
          }

          x_part.set_size(&xb_emlrtRTEI, sp, c_x.size(0), c_x.size(1), c_x.size
                          (2));
          loop_ub = c_x.size(0) * c_x.size(1) * c_x.size(2);
          for (i3 = 0; i3 < loop_ub; i3++) {
            x_part[i3] = c_x[i3];
          }
        } else {
          st.site = &e_emlrtRSI;
          binary_expand_op(st, x_part, r);
        }

        if (b_i > partitions.size(0) - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1,
            &f_emlrtBCI, (emlrtConstCTX)sp);
        }

        iv[0] = (*(int32_T (*)[2])partitions[b_i].f1.size())[0];
        iv[1] = (*(int32_T (*)[2])partitions[b_i].f1.size())[1];
        st.site = &f_emlrtRSI;
        coder::internal::indexShapeCheck(st, y.size(0), iv);
        y_part.set_size(&yb_emlrtRTEI, sp, partitions[b_i].f1.size(1));
        loop_ub = partitions[b_i].f1.size(1);
        for (i3 = 0; i3 < loop_ub; i3++) {
          d2 = partitions[b_i].f1[i3];
          if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
            emlrtIntegerCheckR2012b(d2, &ob_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(d2) < 1) || (static_cast<int32_T>(d2) >
               y.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1, y.size(0),
              &qc_emlrtBCI, (emlrtConstCTX)sp);
          }

          y_part[i3] = y[static_cast<int32_T>(d2) - 1];
        }

        if (row_size < 1.0) {
          loop_ub = 0;
        } else {
          if (coefficients0.size(0) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, coefficients0.size(0),
              &tb_emlrtBCI, (emlrtConstCTX)sp);
          }

          if (row_size != static_cast<int32_T>(muDoubleScalarFloor(row_size))) {
            emlrtIntegerCheckR2012b(row_size, &o_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(row_size) < 1) || (static_cast<int32_T>
               (row_size) > coefficients0.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(row_size), 1,
              coefficients0.size(0), &sb_emlrtBCI, (emlrtConstCTX)sp);
          }

          loop_ub = static_cast<int32_T>(row_size);
        }

        if (b_i + 1 > coefficients0.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, coefficients0.size(1),
            &rb_emlrtBCI, (emlrtConstCTX)sp);
        }

        beta0_part.set_size(&ac_emlrtRTEI, sp, loop_ub);
        for (i3 = 0; i3 < loop_ub; i3++) {
          beta0_part[i3] = coefficients0[i3 + coefficients0.size(0) * b_i];
        }

        if (row_size + 1.0 > coefficients0.size(0)) {
          i3 = 0;
          vectorUB_tmp = 0;
        } else {
          if (row_size + 1.0 != static_cast<int32_T>(muDoubleScalarFloor
               (row_size + 1.0))) {
            emlrtIntegerCheckR2012b(row_size + 1.0, &n_emlrtDCI, (emlrtConstCTX)
              sp);
          }

          if ((static_cast<int32_T>(row_size + 1.0) < 1) || (static_cast<int32_T>
               (row_size + 1.0) > coefficients0.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(row_size + 1.0),
              1, coefficients0.size(0), &qb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = static_cast<int32_T>(row_size + 1.0) - 1;
          if (coefficients0.size(0) < 1) {
            emlrtDynamicBoundsCheckR2012b(coefficients0.size(0), 1,
              coefficients0.size(0), &pb_emlrtBCI, (emlrtConstCTX)sp);
          }

          vectorUB_tmp = coefficients0.size(0);
        }

        if (b_i + 1 > coefficients0.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, coefficients0.size(1),
            &ob_emlrtBCI, (emlrtConstCTX)sp);
        }

        b_loop_ub = vectorUB_tmp - i3;
        gamma0_part.set_size(&bc_emlrtRTEI, sp, b_loop_ub);
        for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
          gamma0_part[vectorUB_tmp] = coefficients0[(i3 + vectorUB_tmp) +
            coefficients0.size(0) * b_i];
        }

        st.site = &g_emlrtRSI;
        b_st.site = &tc_emlrtRSI;
        d2 = coder::combineVectorElements(b_st, y_part) / static_cast<real_T>
          (y_part.size(0));
        b_partitions.set_size(&cc_emlrtRTEI, sp, y_part.size(0));
        nx = y_part.size(0);
        scalarLB_tmp = (y_part.size(0) / 2) << 1;
        vectorUB_tmp = scalarLB_tmp - 2;
        for (i3 = 0; i3 <= vectorUB_tmp; i3 += 2) {
          r1 = _mm_loadu_pd(&y_part[i3]);
          _mm_storeu_pd(&b_partitions[i3], _mm_sub_pd(r1, _mm_set1_pd(d2)));
        }

        for (i3 = scalarLB_tmp; i3 < nx; i3++) {
          b_partitions[i3] = y_part[i3] - d2;
        }

        start_idx = 1.0 / static_cast<real_T>(i2);
        b_y.set_size(&dc_emlrtRTEI, sp, 1, b_partitions.size(0));
        nx = b_partitions.size(0);
        maxdimlen = (b_partitions.size(0) / 2) << 1;
        vectorUB = maxdimlen - 2;
        for (i3 = 0; i3 <= vectorUB; i3 += 2) {
          r1 = _mm_loadu_pd(&b_partitions[i3]);
          _mm_storeu_pd(&b_y[i3], _mm_mul_pd(_mm_set1_pd(start_idx), r1));
        }

        for (i3 = maxdimlen; i3 < nx; i3++) {
          b_y[i3] = start_idx * b_partitions[i3];
        }

        st.site = &g_emlrtRSI;
        b_st.site = &g_emlrtRSI;
        c_st.site = &tc_emlrtRSI;
        d2 = coder::combineVectorElements(c_st, y_part) / static_cast<real_T>
          (y_part.size(0));
        b.set_size(&ec_emlrtRTEI, &st, y_part.size(0));
        nx = y_part.size(0);
        for (i3 = 0; i3 <= vectorUB_tmp; i3 += 2) {
          r1 = _mm_loadu_pd(&y_part[i3]);
          _mm_storeu_pd(&b[i3], _mm_sub_pd(r1, _mm_set1_pd(d2)));
        }

        for (i3 = scalarLB_tmp; i3 < nx; i3++) {
          b[i3] = y_part[i3] - d2;
        }

        b_st.site = &fd_emlrtRSI;
        coder::dynamic_size_checks(b_st, b_y, b, b_y.size(1), b.size(0));
        sigma2 = coder::internal::blas::mtimes(b_y, b);
        st.site = &h_emlrtRSI;
        coder::eye(st, static_cast<real_T>(i2), r);
        b_index.set_size(&fc_emlrtRTEI, sp, 1, loop_ub);
        for (i3 = 0; i3 < loop_ub; i3++) {
          b_index[i3] = coefficients0[i3 + coefficients0.size(0) * b_i];
        }

        st.site = &h_emlrtRSI;
        coder::kron(st, r, b_index, beta_likelihood);
        st.site = &i_emlrtRSI;
        coder::permute(st, x_part, c_x);
        varargin_1 = row_size * static_cast<real_T>(i2);
        st.site = &i_emlrtRSI;
        nx = c_x.size(0) * c_x.size(1) * c_x.size(2);
        b_st.site = &pd_emlrtRSI;
        c_st.site = &qd_emlrtRSI;
        coder::internal::assertValidSizeArg(c_st, varargin_1);
        c_st.site = &qd_emlrtRSI;
        coder::internal::assertValidSizeArg(c_st, col_size);
        b_partitions_old = c_x.size(0);
        if (c_x.size(1) > c_x.size(0)) {
          b_partitions_old = c_x.size(1);
        }

        if (c_x.size(2) > b_partitions_old) {
          b_partitions_old = c_x.size(2);
        }

        maxdimlen = muIntScalarMax_sint32(nx, b_partitions_old);
        if (static_cast<int32_T>(varargin_1) > maxdimlen) {
          emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        if (static_cast<int32_T>(col_size) > maxdimlen) {
          emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
            "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }

        out = (static_cast<int32_T>(varargin_1) >= 0);
        if ((!out) || (static_cast<int32_T>(col_size) < 0)) {
          out = false;
        }

        if (!out) {
          emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
            "MATLAB:checkDimCommon:nonnegativeSize",
            "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }

        if (static_cast<int32_T>(varargin_1) * static_cast<int32_T>(col_size) !=
            nx) {
          emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
            "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }

        st.site = &j_emlrtRSI;
        maxdimlen = static_cast<int32_T>(varargin_1);
        b_partitions_old = static_cast<int32_T>(col_size);
        nx = static_cast<int32_T>(col_size);
        d_x = c_x.reshape(maxdimlen, nx);
        b_st.site = &fd_emlrtRSI;
        coder::dynamic_size_checks(b_st, beta_likelihood, d_x,
          beta_likelihood.size(1), static_cast<int32_T>(varargin_1));
        maxdimlen = static_cast<int32_T>(varargin_1);
        nx = static_cast<int32_T>(col_size);
        d_x = c_x.reshape(maxdimlen, nx);
        b_st.site = &td_emlrtRSI;
        coder::internal::blas::mtimes(b_st, beta_likelihood, d_x, c_y);
        st.site = &j_emlrtRSI;
        b_st.site = &fd_emlrtRSI;
        coder::b_dynamic_size_checks(b_st, c_y, gamma0_part, c_y.size(1),
          b_loop_ub);
        b_st.site = &td_emlrtRSI;
        coder::internal::blas::mtimes(b_st, c_y, gamma0_part, b_partitions);
        i2 = partitions[b_i].f1.size(1);
        if ((i2 != b_partitions.size(0)) && ((i2 != 1) && (b_partitions.size(0)
              != 1))) {
          emlrtDimSizeImpxCheckR2021b(i2, b_partitions.size(0), &q_emlrtECI,
            (emlrtConstCTX)sp);
        }

        if (y_part.size(0) == b_partitions.size(0)) {
          st.site = &j_emlrtRSI;
          b_st.site = &tc_emlrtRSI;
          d2 = coder::combineVectorElements(b_st, y_part) / static_cast<real_T>
            (y_part.size(0));
          b_partitions.set_size(&gc_emlrtRTEI, sp, y_part.size(0));
          loop_ub = y_part.size(0);
          for (i2 = 0; i2 <= vectorUB_tmp; i2 += 2) {
            r1 = _mm_loadu_pd(&y_part[i2]);
            r2 = _mm_loadu_pd(&b_partitions[i2]);
            _mm_storeu_pd(&b_partitions[i2], _mm_sub_pd(_mm_sub_pd(r1,
              _mm_set1_pd(d2)), r2));
          }

          for (i2 = scalarLB_tmp; i2 < loop_ub; i2++) {
            b_partitions[i2] = (y_part[i2] - d2) - b_partitions[i2];
          }
        } else {
          st.site = &j_emlrtRSI;
          binary_expand_op(st, b_partitions, y_part, j_emlrtRSI);
        }

        st.site = &k_emlrtRSI;
        maxdimlen = static_cast<int32_T>(varargin_1);
        nx = static_cast<int32_T>(col_size);
        d_x = c_x.reshape(maxdimlen, nx);
        b_st.site = &fd_emlrtRSI;
        coder::dynamic_size_checks(b_st, beta_likelihood, d_x,
          beta_likelihood.size(1), static_cast<int32_T>(varargin_1));
        maxdimlen = static_cast<int32_T>(varargin_1);
        nx = static_cast<int32_T>(col_size);
        d_x = c_x.reshape(maxdimlen, nx);
        b_st.site = &td_emlrtRSI;
        coder::internal::blas::mtimes(b_st, beta_likelihood, d_x, c_y);
        st.site = &k_emlrtRSI;
        b_st.site = &fd_emlrtRSI;
        coder::b_dynamic_size_checks(b_st, c_y, gamma0_part, c_y.size(1),
          b_loop_ub);
        b_st.site = &td_emlrtRSI;
        coder::internal::blas::mtimes(b_st, c_y, gamma0_part, b);
        i2 = partitions[b_i].f1.size(1);
        if ((i2 != b.size(0)) && ((i2 != 1) && (b.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(i2, b.size(0), &p_emlrtECI, (emlrtConstCTX)
            sp);
        }

        start_idx = 0.5 / (sigma2 * sigma2);
        b_y.set_size(&dc_emlrtRTEI, sp, 1, b_partitions.size(0));
        loop_ub = b_partitions.size(0);
        maxdimlen = (b_partitions.size(0) / 2) << 1;
        vectorUB = maxdimlen - 2;
        for (i2 = 0; i2 <= vectorUB; i2 += 2) {
          r1 = _mm_loadu_pd(&b_partitions[i2]);
          _mm_storeu_pd(&b_y[i2], _mm_mul_pd(_mm_set1_pd(start_idx), r1));
        }

        for (i2 = maxdimlen; i2 < loop_ub; i2++) {
          b_y[i2] = start_idx * b_partitions[i2];
        }

        st.site = &j_emlrtRSI;
        if (y_part.size(0) == b.size(0)) {
          b_st.site = &k_emlrtRSI;
          c_st.site = &tc_emlrtRSI;
          d2 = coder::combineVectorElements(c_st, y_part) / static_cast<real_T>
            (y_part.size(0));
          b.set_size(&hc_emlrtRTEI, &st, y_part.size(0));
          loop_ub = y_part.size(0);
          maxdimlen = (y_part.size(0) / 2) << 1;
          vectorUB = maxdimlen - 2;
          for (i2 = 0; i2 <= vectorUB; i2 += 2) {
            r1 = _mm_loadu_pd(&y_part[i2]);
            r2 = _mm_loadu_pd(&b[i2]);
            _mm_storeu_pd(&b[i2], _mm_sub_pd(_mm_sub_pd(r1, _mm_set1_pd(d2)), r2));
          }

          for (i2 = maxdimlen; i2 < loop_ub; i2++) {
            b[i2] = (y_part[i2] - d2) - b[i2];
          }
        } else {
          b_st.site = &k_emlrtRSI;
          binary_expand_op(b_st, b, y_part, k_emlrtRSI);
        }

        b_st.site = &fd_emlrtRSI;
        coder::dynamic_size_checks(b_st, b_y, b, b_y.size(1), b.size(0));
        st.site = &j_emlrtRSI;
        if (sigma2 < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &eb_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 3, "log");
        }

        st.site = &j_emlrtRSI;
        if (sigma2 < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &eb_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 3, "log");
        }

        log_likelihood0 = (-0.5 * muDoubleScalarLog(sigma2) - 0.5 *
                           muDoubleScalarLog(sigma2)) - coder::internal::blas::
          mtimes(b_y, b);
        start_idx = 1.0;
        if (!(row_size >= 0.0)) {
          emlrtNonNegativeCheckR2012b(row_size, &m_emlrtDCI, (emlrtConstCTX)sp);
        }

        if (row_size != static_cast<int32_T>(muDoubleScalarFloor(row_size))) {
          emlrtIntegerCheckR2012b(row_size, &l_emlrtDCI, (emlrtConstCTX)sp);
        }

        if (!(col_size >= 0.0)) {
          emlrtNonNegativeCheckR2012b(col_size, &k_emlrtDCI, (emlrtConstCTX)sp);
        }

        i2 = static_cast<int32_T>(muDoubleScalarFloor(col_size));
        if (col_size != i2) {
          emlrtIntegerCheckR2012b(col_size, &j_emlrtDCI, (emlrtConstCTX)sp);
        }

        st.site = &l_emlrtRSI;
        b_st.site = &tc_emlrtRSI;
        mu = coder::combineVectorElements(b_st, y_part) / static_cast<real_T>
          (y_part.size(0));
        while ((start_idx > eps_initial) && (iter_initial_in <=
                iter_max_initial_in)) {
          loop_ub = static_cast<int32_T>(row_size);
          b_index.set_size(&kc_emlrtRTEI, sp, 1, static_cast<int32_T>(row_size));
          for (i3 = 0; i3 < loop_ub; i3++) {
            b_index[i3] = 0.0;
          }

          M2.set_size(&lc_emlrtRTEI, sp, static_cast<int32_T>(row_size),
                      static_cast<int32_T>(row_size));
          loop_ub = static_cast<int32_T>(row_size) * static_cast<int32_T>
            (row_size);
          for (i3 = 0; i3 < loop_ub; i3++) {
            M2[i3] = 0.0;
          }

          end_idx = 0.0;
          for (int32_T j{0}; j <= n_part; j++) {
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                x_part.size(2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, x_part.size(2), &nb_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            loop_ub = x_part.size(1);
            r.set_size(&mc_emlrtRTEI, sp, x_part.size(0), x_part.size(1));
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = x_part.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
                r[vectorUB_tmp + r.size(0) * i3] = x_part[(vectorUB_tmp +
                  x_part.size(0) * i3) + x_part.size(0) * x_part.size(1) * j];
              }
            }

            i3 = partitions[b_i].f1.size(1);
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i3) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, i3, &yc_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            start_idx = (y[static_cast<int32_T>(partitions[b_i].f1[j]) - 1] - mu)
              / sigma2;
            loop_ub = gamma0_part.size(0);
            b_y.set_size(&dc_emlrtRTEI, sp, 1, gamma0_part.size(0));
            maxdimlen = (gamma0_part.size(0) / 2) << 1;
            vectorUB = maxdimlen - 2;
            for (i3 = 0; i3 <= vectorUB; i3 += 2) {
              r1 = _mm_loadu_pd(&gamma0_part[i3]);
              _mm_storeu_pd(&b_y[i3], _mm_mul_pd(_mm_set1_pd(start_idx), r1));
            }

            for (i3 = maxdimlen; i3 < loop_ub; i3++) {
              b_y[i3] = start_idx * gamma0_part[i3];
            }

            st.site = &m_emlrtRSI;
            b_st.site = &fd_emlrtRSI;
            coder::b_dynamic_size_checks(b_st, b_y, r, b_y.size(1), x_part.size
              (1));
            b_st.site = &td_emlrtRSI;
            coder::internal::blas::b_mtimes(b_st, b_y, r, partition_lengths);
            if ((b_index.size(1) != partition_lengths.size(1)) && ((b_index.size
                  (1) != 1) && (partition_lengths.size(1) != 1))) {
              emlrtDimSizeImpxCheckR2021b(b_index.size(1),
                partition_lengths.size(1), &o_emlrtECI, (emlrtConstCTX)sp);
            }

            if (b_index.size(1) == partition_lengths.size(1)) {
              loop_ub = b_index.size(1) - 1;
              b_index.set_size(&nc_emlrtRTEI, sp, 1, b_index.size(1));
              maxdimlen = (b_index.size(1) / 2) << 1;
              vectorUB = maxdimlen - 2;
              for (i3 = 0; i3 <= vectorUB; i3 += 2) {
                r1 = _mm_loadu_pd(&b_index[i3]);
                r2 = _mm_loadu_pd(&partition_lengths[i3]);
                _mm_storeu_pd(&b_index[i3], _mm_add_pd(r1, r2));
              }

              for (i3 = maxdimlen; i3 <= loop_ub; i3++) {
                b_index[i3] = b_index[i3] + partition_lengths[i3];
              }
            } else {
              st.site = &m_emlrtRSI;
              plus(st, b_index, partition_lengths);
            }

            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }

          for (int32_T j{0}; j <= n_part; j++) {
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                x_part.size(2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, x_part.size(2), &lb_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            loop_ub = x_part.size(1);
            r.set_size(&oc_emlrtRTEI, sp, x_part.size(0), x_part.size(1));
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = x_part.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
                r[vectorUB_tmp + r.size(0) * i3] = x_part[(vectorUB_tmp +
                  x_part.size(0) * i3) + x_part.size(0) * x_part.size(1) * j];
              }
            }

            st.site = &n_emlrtRSI;
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                x_part.size(2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, x_part.size(2), &mb_emlrtBCI,
                &st);
            }

            loop_ub = x_part.size(1);
            c_y.set_size(&pc_emlrtRTEI, &st, x_part.size(0), x_part.size(1));
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = x_part.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
                c_y[vectorUB_tmp + c_y.size(0) * i3] = x_part[(vectorUB_tmp +
                  x_part.size(0) * i3) + x_part.size(0) * x_part.size(1) * j];
              }
            }

            b_st.site = &fd_emlrtRSI;
            coder::b_dynamic_size_checks(b_st, c_y, gamma0_part, x_part.size(1),
              gamma0_part.size(0));
            b_st.site = &td_emlrtRSI;
            coder::internal::blas::mtimes(b_st, c_y, gamma0_part, b);
            st.site = &n_emlrtRSI;
            b_st.site = &fd_emlrtRSI;
            coder::dynamic_size_checks(b_st, gamma0_part, r, gamma0_part.size(0),
              x_part.size(1));
            b_st.site = &td_emlrtRSI;
            coder::internal::blas::mtimes(b_st, gamma0_part, r, b_y);
            loop_ub = b.size(0);
            maxdimlen = (b.size(0) / 2) << 1;
            vectorUB = maxdimlen - 2;
            for (i3 = 0; i3 <= vectorUB; i3 += 2) {
              r1 = _mm_loadu_pd(&b[i3]);
              _mm_storeu_pd(&b[i3], _mm_div_pd(r1, _mm_set1_pd(sigma2)));
            }

            for (i3 = maxdimlen; i3 < loop_ub; i3++) {
              b[i3] = b[i3] / sigma2;
            }

            r.set_size(&qc_emlrtRTEI, sp, b.size(0), b_y.size(1));
            loop_ub = b_y.size(1);
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = b.size(0);
              maxdimlen = (b.size(0) / 2) << 1;
              vectorUB = maxdimlen - 2;
              for (vectorUB_tmp = 0; vectorUB_tmp <= vectorUB; vectorUB_tmp += 2)
              {
                r1 = _mm_loadu_pd(&b[vectorUB_tmp]);
                _mm_storeu_pd(&r[vectorUB_tmp + r.size(0) * i3], _mm_mul_pd(r1,
                  _mm_set1_pd(b_y[i3])));
              }

              for (vectorUB_tmp = maxdimlen; vectorUB_tmp < b_loop_ub;
                   vectorUB_tmp++) {
                r[vectorUB_tmp + r.size(0) * i3] = b[vectorUB_tmp] * b_y[i3];
              }
            }

            if ((M2.size(0) != r.size(0)) && ((M2.size(0) != 1) && (r.size(0) !=
                  1))) {
              emlrtDimSizeImpxCheckR2021b(M2.size(0), r.size(0), &n_emlrtECI,
                (emlrtConstCTX)sp);
            }

            if ((M2.size(1) != r.size(1)) && ((M2.size(1) != 1) && (r.size(1) !=
                  1))) {
              emlrtDimSizeImpxCheckR2021b(M2.size(1), r.size(1), &m_emlrtECI,
                (emlrtConstCTX)sp);
            }

            if ((M2.size(0) == r.size(0)) && (M2.size(1) == r.size(1))) {
              loop_ub = M2.size(0) * M2.size(1);
              maxdimlen = (loop_ub / 2) << 1;
              vectorUB = maxdimlen - 2;
              for (i3 = 0; i3 <= vectorUB; i3 += 2) {
                r1 = _mm_loadu_pd(&M2[i3]);
                r2 = _mm_loadu_pd(&r[i3]);
                _mm_storeu_pd(&M2[i3], _mm_add_pd(r1, r2));
              }

              for (i3 = maxdimlen; i3 < loop_ub; i3++) {
                M2[i3] = M2[i3] + r[i3];
              }
            } else {
              st.site = &n_emlrtRSI;
              b_plus(st, M2, r);
            }

            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }

          st.site = &o_emlrtRSI;
          b_st.site = &o_emlrtRSI;
          coder::inv(b_st, M2, c_y);
          b_st.site = &fd_emlrtRSI;
          coder::b_dynamic_size_checks(b_st, b_index, c_y, b_index.size(1),
            c_y.size(0));
          b_st.site = &td_emlrtRSI;
          coder::internal::blas::c_mtimes(b_st, b_index, c_y, b_y);
          beta0_part.set_size(&rc_emlrtRTEI, sp, b_y.size(1));
          loop_ub = b_y.size(1);
          for (i3 = 0; i3 < loop_ub; i3++) {
            beta0_part[i3] = b_y[i3];
          }

          // 更新beta
          for (int32_T j{0}; j <= n_part; j++) {
            st.site = &p_emlrtRSI;
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                x_part.size(2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, x_part.size(2), &kb_emlrtBCI,
                &st);
            }

            loop_ub = x_part.size(1);
            c_y.set_size(&sc_emlrtRTEI, &st, x_part.size(0), x_part.size(1));
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = x_part.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
                c_y[vectorUB_tmp + c_y.size(0) * i3] = x_part[(vectorUB_tmp +
                  x_part.size(0) * i3) + x_part.size(0) * x_part.size(1) * j];
              }
            }

            b_st.site = &fd_emlrtRSI;
            coder::dynamic_size_checks(b_st, beta0_part, c_y, beta0_part.size(0),
              x_part.size(0));
            b_st.site = &td_emlrtRSI;
            coder::internal::blas::b_mtimes(b_st, beta0_part, c_y, b_y);
            st.site = &p_emlrtRSI;
            b_st.site = &fd_emlrtRSI;
            coder::dynamic_size_checks(b_st, b_y, gamma0_part, b_y.size(1),
              gamma0_part.size(0));
            st.site = &p_emlrtRSI;
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                x_part.size(2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, x_part.size(2), &jb_emlrtBCI,
                &st);
            }

            loop_ub = x_part.size(1);
            c_y.set_size(&tc_emlrtRTEI, &st, x_part.size(0), x_part.size(1));
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = x_part.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
                c_y[vectorUB_tmp + c_y.size(0) * i3] = x_part[(vectorUB_tmp +
                  x_part.size(0) * i3) + x_part.size(0) * x_part.size(1) * j];
              }
            }

            b_st.site = &fd_emlrtRSI;
            coder::dynamic_size_checks(b_st, beta0_part, c_y, beta0_part.size(0),
              x_part.size(0));
            b_st.site = &td_emlrtRSI;
            coder::internal::blas::b_mtimes(b_st, beta0_part, c_y, b_index);
            st.site = &p_emlrtRSI;
            b_st.site = &fd_emlrtRSI;
            coder::dynamic_size_checks(b_st, b_index, gamma0_part, b_index.size
              (1), gamma0_part.size(0));
            i3 = partitions[b_i].f1.size(1);
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i3) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, i3, &hd_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            i3 = partitions[b_i].f1.size(1);
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i3) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, i3, &id_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            start_idx = y[static_cast<int32_T>(partitions[b_i].f1[j]) - 1] - mu;
            end_idx += 1.0 / static_cast<real_T>(n_part + 1) * ((start_idx -
              coder::internal::blas::mtimes(b_y, gamma0_part)) / sigma2) *
              (start_idx - coder::internal::blas::mtimes(b_index, gamma0_part));
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }

          b_index.set_size(&uc_emlrtRTEI, sp, 1, b_index.size(1));
          if (static_cast<int32_T>(col_size) != i2) {
            emlrtIntegerCheckR2012b(col_size, &ab_emlrtDCI, (emlrtConstCTX)sp);
          }

          b_index.set_size(&uc_emlrtRTEI, sp, b_index.size(0),
                           static_cast<int32_T>(col_size));
          if (static_cast<int32_T>(col_size) != i2) {
            emlrtIntegerCheckR2012b(col_size, &qb_emlrtDCI, (emlrtConstCTX)sp);
          }

          for (i3 = 0; i3 < b_partitions_old; i3++) {
            b_index[i3] = 0.0;
          }

          if (static_cast<int32_T>(col_size) != i2) {
            emlrtIntegerCheckR2012b(col_size, &bb_emlrtDCI, (emlrtConstCTX)sp);
          }

          M2.set_size(&vc_emlrtRTEI, sp, static_cast<int32_T>(col_size), M2.size
                      (1));
          if (static_cast<int32_T>(col_size) != i2) {
            emlrtIntegerCheckR2012b(col_size, &cb_emlrtDCI, (emlrtConstCTX)sp);
          }

          M2.set_size(&vc_emlrtRTEI, sp, M2.size(0), static_cast<int32_T>
                      (col_size));
          if (static_cast<int32_T>(col_size) != i2) {
            emlrtIntegerCheckR2012b(col_size, &sb_emlrtDCI, (emlrtConstCTX)sp);
          }

          loop_ub = static_cast<int32_T>(col_size) * static_cast<int32_T>
            (col_size);
          for (i3 = 0; i3 < loop_ub; i3++) {
            M2[i3] = 0.0;
          }

          sigma2 = 0.0;
          for (int32_T j{0}; j <= n_part; j++) {
            i3 = partitions[b_i].f1.size(1);
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i3) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, i3, &gd_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            start_idx = (y[static_cast<int32_T>(partitions[b_i].f1[j]) - 1] - mu)
              / end_idx;
            loop_ub = beta0_part.size(0);
            b_y.set_size(&dc_emlrtRTEI, sp, 1, beta0_part.size(0));
            maxdimlen = (beta0_part.size(0) / 2) << 1;
            vectorUB = maxdimlen - 2;
            for (i3 = 0; i3 <= vectorUB; i3 += 2) {
              r1 = _mm_loadu_pd(&beta0_part[i3]);
              _mm_storeu_pd(&b_y[i3], _mm_mul_pd(_mm_set1_pd(start_idx), r1));
            }

            for (i3 = maxdimlen; i3 < loop_ub; i3++) {
              b_y[i3] = start_idx * beta0_part[i3];
            }

            st.site = &q_emlrtRSI;
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                x_part.size(2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, x_part.size(2), &ib_emlrtBCI,
                &st);
            }

            loop_ub = x_part.size(1);
            c_y.set_size(&wc_emlrtRTEI, &st, x_part.size(0), x_part.size(1));
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = x_part.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
                c_y[vectorUB_tmp + c_y.size(0) * i3] = x_part[(vectorUB_tmp +
                  x_part.size(0) * i3) + x_part.size(0) * x_part.size(1) * j];
              }
            }

            b_st.site = &fd_emlrtRSI;
            coder::b_dynamic_size_checks(b_st, b_y, c_y, b_y.size(1),
              x_part.size(0));
            b_st.site = &td_emlrtRSI;
            coder::internal::blas::c_mtimes(b_st, b_y, c_y, partition_lengths);
            if ((b_index.size(1) != partition_lengths.size(1)) && ((b_index.size
                  (1) != 1) && (partition_lengths.size(1) != 1))) {
              emlrtDimSizeImpxCheckR2021b(b_index.size(1),
                partition_lengths.size(1), &l_emlrtECI, (emlrtConstCTX)sp);
            }

            if (b_index.size(1) == partition_lengths.size(1)) {
              loop_ub = b_index.size(1) - 1;
              b_index.set_size(&xc_emlrtRTEI, sp, 1, b_index.size(1));
              maxdimlen = (b_index.size(1) / 2) << 1;
              vectorUB = maxdimlen - 2;
              for (i3 = 0; i3 <= vectorUB; i3 += 2) {
                r1 = _mm_loadu_pd(&b_index[i3]);
                r2 = _mm_loadu_pd(&partition_lengths[i3]);
                _mm_storeu_pd(&b_index[i3], _mm_add_pd(r1, r2));
              }

              for (i3 = maxdimlen; i3 <= loop_ub; i3++) {
                b_index[i3] = b_index[i3] + partition_lengths[i3];
              }
            } else {
              st.site = &q_emlrtRSI;
              plus(st, b_index, partition_lengths);
            }

            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }

          for (int32_T j{0}; j <= n_part; j++) {
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                x_part.size(2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, x_part.size(2), &hb_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            loop_ub = x_part.size(1);
            r.set_size(&yc_emlrtRTEI, sp, x_part.size(0), x_part.size(1));
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = x_part.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
                r[vectorUB_tmp + r.size(0) * i3] = x_part[(vectorUB_tmp +
                  x_part.size(0) * i3) + x_part.size(0) * x_part.size(1) * j];
              }
            }

            st.site = &r_emlrtRSI;
            b_st.site = &fd_emlrtRSI;
            coder::b_dynamic_size_checks(b_st, r, beta0_part, x_part.size(0),
              beta0_part.size(0));
            b_st.site = &td_emlrtRSI;
            coder::internal::blas::b_mtimes(b_st, r, beta0_part, b);
            st.site = &r_emlrtRSI;
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                x_part.size(2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, x_part.size(2), &gb_emlrtBCI,
                &st);
            }

            loop_ub = x_part.size(1);
            c_y.set_size(&ad_emlrtRTEI, &st, x_part.size(0), x_part.size(1));
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = x_part.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
                c_y[vectorUB_tmp + c_y.size(0) * i3] = x_part[(vectorUB_tmp +
                  x_part.size(0) * i3) + x_part.size(0) * x_part.size(1) * j];
              }
            }

            b_st.site = &fd_emlrtRSI;
            coder::dynamic_size_checks(b_st, beta0_part, c_y, beta0_part.size(0),
              x_part.size(0));
            b_st.site = &td_emlrtRSI;
            coder::internal::blas::b_mtimes(b_st, beta0_part, c_y, b_y);
            loop_ub = b.size(0);
            maxdimlen = (b.size(0) / 2) << 1;
            vectorUB = maxdimlen - 2;
            for (i3 = 0; i3 <= vectorUB; i3 += 2) {
              r1 = _mm_loadu_pd(&b[i3]);
              _mm_storeu_pd(&b[i3], _mm_div_pd(r1, _mm_set1_pd(end_idx)));
            }

            for (i3 = maxdimlen; i3 < loop_ub; i3++) {
              b[i3] = b[i3] / end_idx;
            }

            r.set_size(&bd_emlrtRTEI, sp, b.size(0), b_y.size(1));
            loop_ub = b_y.size(1);
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = b.size(0);
              maxdimlen = (b.size(0) / 2) << 1;
              vectorUB = maxdimlen - 2;
              for (vectorUB_tmp = 0; vectorUB_tmp <= vectorUB; vectorUB_tmp += 2)
              {
                r1 = _mm_loadu_pd(&b[vectorUB_tmp]);
                _mm_storeu_pd(&r[vectorUB_tmp + r.size(0) * i3], _mm_mul_pd(r1,
                  _mm_set1_pd(b_y[i3])));
              }

              for (vectorUB_tmp = maxdimlen; vectorUB_tmp < b_loop_ub;
                   vectorUB_tmp++) {
                r[vectorUB_tmp + r.size(0) * i3] = b[vectorUB_tmp] * b_y[i3];
              }
            }

            if ((M2.size(0) != r.size(0)) && ((M2.size(0) != 1) && (r.size(0) !=
                  1))) {
              emlrtDimSizeImpxCheckR2021b(M2.size(0), r.size(0), &k_emlrtECI,
                (emlrtConstCTX)sp);
            }

            if ((M2.size(1) != r.size(1)) && ((M2.size(1) != 1) && (r.size(1) !=
                  1))) {
              emlrtDimSizeImpxCheckR2021b(M2.size(1), r.size(1), &j_emlrtECI,
                (emlrtConstCTX)sp);
            }

            if ((M2.size(0) == r.size(0)) && (M2.size(1) == r.size(1))) {
              loop_ub = M2.size(0) * M2.size(1);
              maxdimlen = (loop_ub / 2) << 1;
              vectorUB = maxdimlen - 2;
              for (i3 = 0; i3 <= vectorUB; i3 += 2) {
                r1 = _mm_loadu_pd(&M2[i3]);
                r2 = _mm_loadu_pd(&r[i3]);
                _mm_storeu_pd(&M2[i3], _mm_add_pd(r1, r2));
              }

              for (i3 = maxdimlen; i3 < loop_ub; i3++) {
                M2[i3] = M2[i3] + r[i3];
              }
            } else {
              st.site = &r_emlrtRSI;
              b_plus(st, M2, r);
            }

            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }

          st.site = &s_emlrtRSI;
          b_st.site = &s_emlrtRSI;
          coder::inv(b_st, M2, c_y);
          b_st.site = &fd_emlrtRSI;
          coder::b_dynamic_size_checks(b_st, b_index, c_y, b_index.size(1),
            c_y.size(0));
          b_st.site = &td_emlrtRSI;
          coder::internal::blas::c_mtimes(b_st, b_index, c_y, b_y);
          gamma0_part.set_size(&cd_emlrtRTEI, sp, b_y.size(1));
          loop_ub = b_y.size(1);
          for (i3 = 0; i3 < loop_ub; i3++) {
            gamma0_part[i3] = b_y[i3];
          }

          // 更新gamma
          for (int32_T j{0}; j <= n_part; j++) {
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                x_part.size(2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, x_part.size(2), &fb_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            loop_ub = x_part.size(1);
            r.set_size(&dd_emlrtRTEI, sp, x_part.size(0), x_part.size(1));
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = x_part.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
                r[vectorUB_tmp + r.size(0) * i3] = x_part[(vectorUB_tmp +
                  x_part.size(0) * i3) + x_part.size(0) * x_part.size(1) * j];
              }
            }

            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) >
                x_part.size(2)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, x_part.size(2), &eb_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            loop_ub = x_part.size(1);
            c_y.set_size(&ed_emlrtRTEI, sp, x_part.size(0), x_part.size(1));
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_loop_ub = x_part.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < b_loop_ub; vectorUB_tmp++) {
                c_y[vectorUB_tmp + c_y.size(0) * i3] = x_part[(vectorUB_tmp +
                  x_part.size(0) * i3) + x_part.size(0) * x_part.size(1) * j];
              }
            }

            st.site = &t_emlrtRSI;
            b_st.site = &fd_emlrtRSI;
            coder::dynamic_size_checks(b_st, gamma0_part, r, gamma0_part.size(0),
              x_part.size(1));
            b_st.site = &td_emlrtRSI;
            coder::internal::blas::mtimes(b_st, gamma0_part, r, b_y);
            st.site = &t_emlrtRSI;
            b_st.site = &fd_emlrtRSI;
            coder::dynamic_size_checks(b_st, b_y, beta0_part, b_y.size(1),
              beta0_part.size(0));
            st.site = &t_emlrtRSI;
            b_st.site = &fd_emlrtRSI;
            coder::dynamic_size_checks(b_st, gamma0_part, c_y, gamma0_part.size
              (0), x_part.size(1));
            b_st.site = &td_emlrtRSI;
            coder::internal::blas::mtimes(b_st, gamma0_part, c_y, b_index);
            st.site = &t_emlrtRSI;
            b_st.site = &fd_emlrtRSI;
            coder::dynamic_size_checks(b_st, b_index, beta0_part, b_index.size(1),
              beta0_part.size(0));
            i3 = partitions[b_i].f1.size(1);
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i3) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, i3, &nd_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            i3 = partitions[b_i].f1.size(1);
            if (static_cast<int32_T>(static_cast<uint32_T>(j) + 1U) > i3) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                (static_cast<uint32_T>(j) + 1U), 1, i3, &od_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            start_idx = y[static_cast<int32_T>(partitions[b_i].f1[j]) - 1] - mu;
            sigma2 += 1.0 / static_cast<real_T>(n_part + 1) * ((start_idx -
              coder::internal::blas::mtimes(b_y, beta0_part)) / end_idx) *
              (start_idx - coder::internal::blas::mtimes(b_index, beta0_part));
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }

          st.site = &u_emlrtRSI;
          maxdimlen = static_cast<int32_T>(varargin_1);
          nx = static_cast<int32_T>(col_size);
          d_x = c_x.reshape(maxdimlen, nx);
          b_st.site = &fd_emlrtRSI;
          coder::dynamic_size_checks(b_st, beta_likelihood, d_x,
            beta_likelihood.size(1), static_cast<int32_T>(varargin_1));
          maxdimlen = static_cast<int32_T>(varargin_1);
          nx = static_cast<int32_T>(col_size);
          d_x = c_x.reshape(maxdimlen, nx);
          b_st.site = &td_emlrtRSI;
          coder::internal::blas::mtimes(b_st, beta_likelihood, d_x, c_y);
          st.site = &u_emlrtRSI;
          b_st.site = &fd_emlrtRSI;
          coder::b_dynamic_size_checks(b_st, c_y, gamma0_part, c_y.size(1),
            gamma0_part.size(0));
          b_st.site = &td_emlrtRSI;
          coder::internal::blas::mtimes(b_st, c_y, gamma0_part, b_partitions);
          i3 = partitions[b_i].f1.size(1);
          if ((i3 != b_partitions.size(0)) && ((i3 != 1) && (b_partitions.size(0)
                != 1))) {
            emlrtDimSizeImpxCheckR2021b(i3, b_partitions.size(0), &i_emlrtECI,
              (emlrtConstCTX)sp);
          }

          if (y_part.size(0) == b_partitions.size(0)) {
            st.site = &u_emlrtRSI;
            b_st.site = &tc_emlrtRSI;
            d2 = coder::combineVectorElements(b_st, y_part) / static_cast<real_T>
              (y_part.size(0));
            b_partitions.set_size(&fd_emlrtRTEI, sp, y_part.size(0));
            loop_ub = y_part.size(0);
            maxdimlen = (y_part.size(0) / 2) << 1;
            vectorUB = maxdimlen - 2;
            for (i3 = 0; i3 <= vectorUB; i3 += 2) {
              r1 = _mm_loadu_pd(&y_part[i3]);
              r2 = _mm_loadu_pd(&b_partitions[i3]);
              _mm_storeu_pd(&b_partitions[i3], _mm_sub_pd(_mm_sub_pd(r1,
                _mm_set1_pd(d2)), r2));
            }

            for (i3 = maxdimlen; i3 < loop_ub; i3++) {
              b_partitions[i3] = (y_part[i3] - d2) - b_partitions[i3];
            }
          } else {
            st.site = &u_emlrtRSI;
            binary_expand_op(st, b_partitions, y_part, u_emlrtRSI);
          }

          st.site = &v_emlrtRSI;
          maxdimlen = static_cast<int32_T>(varargin_1);
          nx = static_cast<int32_T>(col_size);
          d_x = c_x.reshape(maxdimlen, nx);
          b_st.site = &fd_emlrtRSI;
          coder::dynamic_size_checks(b_st, beta_likelihood, d_x,
            beta_likelihood.size(1), static_cast<int32_T>(varargin_1));
          maxdimlen = static_cast<int32_T>(varargin_1);
          nx = static_cast<int32_T>(col_size);
          d_x = c_x.reshape(maxdimlen, nx);
          b_st.site = &td_emlrtRSI;
          coder::internal::blas::mtimes(b_st, beta_likelihood, d_x, c_y);
          st.site = &v_emlrtRSI;
          b_st.site = &fd_emlrtRSI;
          coder::b_dynamic_size_checks(b_st, c_y, gamma0_part, c_y.size(1),
            gamma0_part.size(0));
          b_st.site = &td_emlrtRSI;
          coder::internal::blas::mtimes(b_st, c_y, gamma0_part, b);
          i3 = partitions[b_i].f1.size(1);
          if ((i3 != b.size(0)) && ((i3 != 1) && (b.size(0) != 1))) {
            emlrtDimSizeImpxCheckR2021b(i3, b.size(0), &h_emlrtECI,
              (emlrtConstCTX)sp);
          }

          start_idx = 0.5 / (end_idx * sigma2);
          b_y.set_size(&dc_emlrtRTEI, sp, 1, b_partitions.size(0));
          loop_ub = b_partitions.size(0);
          maxdimlen = (b_partitions.size(0) / 2) << 1;
          vectorUB = maxdimlen - 2;
          for (i3 = 0; i3 <= vectorUB; i3 += 2) {
            r1 = _mm_loadu_pd(&b_partitions[i3]);
            _mm_storeu_pd(&b_y[i3], _mm_mul_pd(_mm_set1_pd(start_idx), r1));
          }

          for (i3 = maxdimlen; i3 < loop_ub; i3++) {
            b_y[i3] = start_idx * b_partitions[i3];
          }

          st.site = &u_emlrtRSI;
          if (y_part.size(0) == b.size(0)) {
            b_st.site = &v_emlrtRSI;
            c_st.site = &tc_emlrtRSI;
            d2 = coder::combineVectorElements(c_st, y_part) / static_cast<real_T>
              (y_part.size(0));
            b.set_size(&gd_emlrtRTEI, &st, y_part.size(0));
            loop_ub = y_part.size(0);
            maxdimlen = (y_part.size(0) / 2) << 1;
            vectorUB = maxdimlen - 2;
            for (i3 = 0; i3 <= vectorUB; i3 += 2) {
              r1 = _mm_loadu_pd(&y_part[i3]);
              r2 = _mm_loadu_pd(&b[i3]);
              _mm_storeu_pd(&b[i3], _mm_sub_pd(_mm_sub_pd(r1, _mm_set1_pd(d2)),
                r2));
            }

            for (i3 = maxdimlen; i3 < loop_ub; i3++) {
              b[i3] = (y_part[i3] - d2) - b[i3];
            }
          } else {
            b_st.site = &v_emlrtRSI;
            binary_expand_op(b_st, b, y_part, v_emlrtRSI);
          }

          b_st.site = &fd_emlrtRSI;
          coder::dynamic_size_checks(b_st, b_y, b, b_y.size(1), b.size(0));
          st.site = &u_emlrtRSI;
          if (sigma2 < 0.0) {
            emlrtErrorWithMessageIdR2018a(&st, &eb_emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 3, "log");
          }

          st.site = &u_emlrtRSI;
          if (end_idx < 0.0) {
            emlrtErrorWithMessageIdR2018a(&st, &eb_emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 3, "log");
          }

          end_idx = (-0.5 * muDoubleScalarLog(sigma2) - 0.5 * muDoubleScalarLog
                     (end_idx)) - coder::internal::blas::mtimes(b_y, b);
          start_idx = muDoubleScalarAbs(end_idx - log_likelihood0);
          log_likelihood0 = end_idx;
          iter_initial_in++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }

        // guiyi = (sign(gamma_part(1))*norm(gamma_part));%拿出来了
        // guiyi = gamma_part(1);
        if (gamma0_part.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, gamma0_part.size(0), &db_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        st.site = &w_emlrtRSI;
        if (row_size < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &db_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 4, "sqrt");
        }

        st.site = &w_emlrtRSI;
        if (col_size < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &db_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 4, "sqrt");
        }

        d2 = muDoubleScalarSqrt(row_size) / muDoubleScalarSqrt(col_size) *
          (coder::b_norm(gamma0_part) / coder::b_norm(beta0_part));
        st.site = &w_emlrtRSI;
        if (d2 < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &db_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 4, "sqrt");
        }

        d2 = muDoubleScalarSqrt(d2);
        start_idx = muDoubleScalarSign(gamma0_part[0]) * d2;
        loop_ub = gamma0_part.size(0);
        maxdimlen = (gamma0_part.size(0) / 2) << 1;
        vectorUB = maxdimlen - 2;
        for (i2 = 0; i2 <= vectorUB; i2 += 2) {
          r1 = _mm_loadu_pd(&gamma0_part[i2]);
          _mm_storeu_pd(&gamma0_part[i2], _mm_div_pd(r1, _mm_set1_pd(start_idx)));
        }

        for (i2 = maxdimlen; i2 < loop_ub; i2++) {
          gamma0_part[i2] = gamma0_part[i2] / start_idx;
        }

        // 拿出来了
        loop_ub = beta0_part.size(0);
        maxdimlen = (beta0_part.size(0) / 2) << 1;
        vectorUB = maxdimlen - 2;
        for (i2 = 0; i2 <= vectorUB; i2 += 2) {
          r1 = _mm_loadu_pd(&beta0_part[i2]);
          _mm_storeu_pd(&beta0_part[i2], _mm_mul_pd(r1, _mm_set1_pd(start_idx)));
        }

        for (i2 = maxdimlen; i2 < loop_ub; i2++) {
          beta0_part[i2] = beta0_part[i2] * start_idx;
        }

        // 拿出来了
        if (row_size < 1.0) {
          i2 = 0;
        } else {
          if (coefficients.size(0) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, coefficients.size(0),
              &cb_emlrtBCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(row_size) < 1) || (static_cast<int32_T>
               (row_size) > coefficients.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(row_size), 1,
              coefficients.size(0), &bb_emlrtBCI, (emlrtConstCTX)sp);
          }

          i2 = static_cast<int32_T>(row_size);
        }

        if (b_i + 1 > coefficients.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, coefficients.size(1),
            &ab_emlrtBCI, (emlrtConstCTX)sp);
        }

        emlrtSubAssignSizeCheckR2012b(&i2, 1, beta0_part.size(), 1, &g_emlrtECI,
          (emlrtCTX)sp);
        loop_ub = beta0_part.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          coefficients[i2 + coefficients.size(0) * b_i] = beta0_part[i2];
        }

        // 系数存储矩阵
        if (static_cast<uint32_T>(row_size) + 1U > static_cast<uint32_T>
            (coefficients.size(0))) {
          i2 = 0;
          i3 = 0;
        } else {
          if ((static_cast<int32_T>(static_cast<uint32_T>(row_size) + 1U) < 1) ||
              (static_cast<int32_T>(static_cast<uint32_T>(row_size) + 1U) >
               coefficients.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
              (static_cast<uint32_T>(row_size) + 1U), 1, coefficients.size(0),
              &y_emlrtBCI, (emlrtConstCTX)sp);
          }

          i2 = static_cast<int32_T>(static_cast<uint32_T>(row_size));
          if (coefficients.size(0) < 1) {
            emlrtDynamicBoundsCheckR2012b(coefficients.size(0), 1,
              coefficients.size(0), &x_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = coefficients.size(0);
        }

        if (b_i + 1 > coefficients.size(1)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, coefficients.size(1),
            &w_emlrtBCI, (emlrtConstCTX)sp);
        }

        b_partitions_old = i3 - i2;
        emlrtSubAssignSizeCheckR2012b(&b_partitions_old, 1, gamma0_part.size(),
          1, &f_emlrtECI, (emlrtCTX)sp);
        loop_ub = gamma0_part.size(0);
        for (i3 = 0; i3 < loop_ub; i3++) {
          coefficients[(i2 + i3) + coefficients.size(0) * b_i] = gamma0_part[i3];
        }

        // 系数存储矩阵
        for (scalarLB_tmp = 0; scalarLB_tmp <= sample_size; scalarLB_tmp++) {
          if (scalarLB_tmp + 1 > partitions_old[0].f1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(scalarLB_tmp + 1, 1, partitions_old[0]
              .f1.size(1), &cd_emlrtBCI, (emlrtConstCTX)sp);
          }

          d2 = partitions_old[0].f1[scalarLB_tmp];
          end_idx = static_cast<int32_T>(muDoubleScalarFloor(d2));
          if (d2 != end_idx) {
            emlrtIntegerCheckR2012b(d2, &i_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(d2) < 1) || (static_cast<int32_T>(d2) >
               x.size(2))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1, x.size(2),
              &v_emlrtBCI, (emlrtConstCTX)sp);
          }

          c_x.set_size(&ic_emlrtRTEI, sp, x.size(0), x.size(1), c_x.size(2));
          if (b_i > i1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &dd_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          c_x.set_size(&ic_emlrtRTEI, sp, c_x.size(0), c_x.size(1),
                       partitions[b_i].f1.size(1));
          if (b_i > i1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &dd_emlrtBCI,
              (emlrtConstCTX)sp);
          }

          loop_ub = partitions[b_i].f1.size(1);
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_loop_ub = x.size(1);
            for (i3 = 0; i3 < b_loop_ub; i3++) {
              nx = x.size(0);
              for (vectorUB_tmp = 0; vectorUB_tmp < nx; vectorUB_tmp++) {
                if (b_i > i1) {
                  emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &fd_emlrtBCI,
                    (emlrtConstCTX)sp);
                }

                iter_initial_in = partitions[b_i].f1[i2];
                if (iter_initial_in != static_cast<int32_T>(muDoubleScalarFloor
                     (iter_initial_in))) {
                  emlrtIntegerCheckR2012b(iter_initial_in, &rb_emlrtDCI,
                    (emlrtConstCTX)sp);
                }

                if ((static_cast<int32_T>(iter_initial_in) < 1) || (static_cast<
                     int32_T>(iter_initial_in) > x.size(2))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
                    (iter_initial_in), 1, x.size(2), &ed_emlrtBCI,
                    (emlrtConstCTX)sp);
                }

                c_x[(vectorUB_tmp + c_x.size(0) * i3) + c_x.size(0) * c_x.size(1)
                  * i2] = x[(vectorUB_tmp + x.size(0) * i3) + x.size(0) * x.size
                  (1) * (static_cast<int32_T>(iter_initial_in) - 1)];
              }
            }
          }

          st.site = &x_emlrtRSI;
          coder::mean(st, c_x, c_y);
          if ((x.size(0) != c_y.size(0)) && ((x.size(0) != 1) && (c_y.size(0) !=
                1))) {
            emlrtDimSizeImpxCheckR2021b(x.size(0), c_y.size(0), &e_emlrtECI,
              (emlrtConstCTX)sp);
          }

          loop_ub = x.size(1);
          if ((x.size(1) != c_y.size(1)) && ((x.size(1) != 1) && (c_y.size(1) !=
                1))) {
            emlrtDimSizeImpxCheckR2021b(x.size(1), c_y.size(1), &d_emlrtECI,
              (emlrtConstCTX)sp);
          }

          st.site = &x_emlrtRSI;
          if ((x.size(0) == c_y.size(0)) && (x.size(1) == c_y.size(1))) {
            b_partitions_old = static_cast<int32_T>(partitions_old[0]
              .f1[scalarLB_tmp]);
            c_y.set_size(&jc_emlrtRTEI, &st, x.size(0), x.size(1));
            for (i2 = 0; i2 < loop_ub; i2++) {
              b_loop_ub = x.size(0);
              maxdimlen = (x.size(0) / 2) << 1;
              vectorUB = maxdimlen - 2;
              for (i3 = 0; i3 <= vectorUB; i3 += 2) {
                r1 = _mm_loadu_pd(&c_y[i3 + c_y.size(0) * i2]);
                _mm_storeu_pd(&c_y[i3 + c_y.size(0) * i2], _mm_sub_pd
                              (_mm_loadu_pd(&x[(i3 + x.size(0) * i2) + x.size(0)
                  * x.size(1) * (b_partitions_old - 1)]), r1));
              }

              for (i3 = maxdimlen; i3 < b_loop_ub; i3++) {
                c_y[i3 + c_y.size(0) * i2] = x[(i3 + x.size(0) * i2) + x.size(0)
                  * x.size(1) * (b_partitions_old - 1)] - c_y[i3 + c_y.size(0) *
                  i2];
              }
            }
          } else {
            b_st.site = &x_emlrtRSI;
            binary_expand_op(b_st, c_y, x, partitions_old[0], scalarLB_tmp);
          }

          b_st.site = &fd_emlrtRSI;
          coder::dynamic_size_checks(b_st, beta0_part, c_y, beta0_part.size(0),
            c_y.size(0));
          b_st.site = &td_emlrtRSI;
          coder::internal::blas::b_mtimes(b_st, beta0_part, c_y, b_y);
          st.site = &x_emlrtRSI;
          b_st.site = &fd_emlrtRSI;
          coder::dynamic_size_checks(b_st, b_y, gamma0_part, b_y.size(1),
            gamma0_part.size(0));
          if (scalarLB_tmp + 1 > partitions_old[0].f1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(scalarLB_tmp + 1, 1, partitions_old[0]
              .f1.size(1), &kd_emlrtBCI, (emlrtConstCTX)sp);
          }

          if (d2 != end_idx) {
            emlrtIntegerCheckR2012b(d2, &tb_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(d2) < 1) || (static_cast<int32_T>(d2) >
               y.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1, y.size(0),
              &jd_emlrtBCI, (emlrtConstCTX)sp);
          }

          st.site = &x_emlrtRSI;
          b_st.site = &tc_emlrtRSI;
          start_idx = coder::combineVectorElements(b_st, y_part) /
            static_cast<real_T>(y_part.size(0));
          start_idx = (y[static_cast<int32_T>(d2) - 1] - coder::internal::blas::
                       mtimes(b_y, gamma0_part)) - start_idx;
          if (scalarLB_tmp + 1 > residuals.size(0)) {
            emlrtDynamicBoundsCheckR2012b(scalarLB_tmp + 1, 1, residuals.size(0),
              &ld_emlrtBCI, (emlrtConstCTX)sp);
          }

          if (b_i + 1 > residuals.size(1)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, residuals.size(1),
              &md_emlrtBCI, (emlrtConstCTX)sp);
          }

          residuals[scalarLB_tmp + residuals.size(0) * b_i] = muDoubleScalarAbs
            (start_idx);

          // 残差存储矩阵
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }

        // z{i,1} = partitions{i,1};%@@@@@@@@@@@@@
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    // residuals
    if (static_cast<int32_T>(num_partitions) != i) {
      emlrtIntegerCheckR2012b(num_partitions, &h_emlrtDCI, (emlrtConstCTX)sp);
    }

    partitions.set_size(&gb_emlrtRTEI, sp, static_cast<int32_T>(num_partitions));
    for (i1 = 0; i1 < unnamed_idx_0_tmp_tmp_tmp; i1++) {
      if (i1 > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, partitions.size(0) - 1,
          &ec_emlrtBCI, (emlrtConstCTX)sp);
      }

      partitions[i1].f1.set_size(&gb_emlrtRTEI, sp, 1, partitions[i1].f1.size(1));
      if (i1 > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(i1, 0, partitions.size(0) - 1,
          &ec_emlrtBCI, (emlrtConstCTX)sp);
      }

      partitions[i1].f1.set_size(&gb_emlrtRTEI, sp, partitions[i1].f1.size(0), 0);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    // @@@@@@@@@@@@@
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, num_partitions, mxDOUBLE_CLASS,
      static_cast<int32_T>(num_partitions), &k_emlrtRTEI, (emlrtConstCTX)sp);
    partitions.set_size(&hb_emlrtRTEI, sp, static_cast<int32_T>(num_partitions));
    for (int32_T b_i{0}; b_i < unnamed_idx_0_tmp_tmp_tmp; b_i++) {
      if (b_i > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1,
          &bc_emlrtBCI, (emlrtConstCTX)sp);
      }

      partitions[b_i].f1.set_size(&hd_emlrtRTEI, sp, 1, partitions[b_i].f1.size
        (1));
      if (b_i > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1,
          &bc_emlrtBCI, (emlrtConstCTX)sp);
      }

      partitions[b_i].f1.set_size(&hd_emlrtRTEI, sp, partitions[b_i].f1.size(0),
        1);
      if (b_i > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, partitions.size(0) - 1,
          &bc_emlrtBCI, (emlrtConstCTX)sp);
      }

      partitions[b_i].f1[0] = 0.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    // for i = 1:num_partitions%@@@@@@@@@@@@@
    //     partitions{i,1} = z{i,1};%@@@@@@@@@@@@@
    // end%@@@@@@@@@@@@@
    st.site = &y_emlrtRSI;
    b_st.site = &se_emlrtRSI;
    c_st.site = &te_emlrtRSI;
    d_st.site = &ue_emlrtRSI;
    if (residuals.size(1) < 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &ve_emlrtRSI;
    f_st.site = &we_emlrtRSI;
    g_st.site = &xe_emlrtRSI;
    maxdimlen = residuals.size(0);
    b_partitions_old = residuals.size(1);
    b.set_size(&id_emlrtRTEI, &g_st, residuals.size(0));
    idx.set_size(&jd_emlrtRTEI, &g_st, residuals.size(0));
    loop_ub = residuals.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      idx[i1] = 1;
    }

    if (residuals.size(0) >= 1) {
      h_st.site = &bf_emlrtRSI;
      if (residuals.size(0) > 2147483646) {
        i_st.site = &ib_emlrtRSI;
        coder::check_forloop_overflow_error(i_st);
      }

      for (int32_T b_i{0}; b_i < maxdimlen; b_i++) {
        b[b_i] = residuals[b_i];
      }

      h_st.site = &af_emlrtRSI;
      if (residuals.size(1) > 2147483646) {
        i_st.site = &ib_emlrtRSI;
        coder::check_forloop_overflow_error(i_st);
      }

      for (int32_T j{2}; j <= b_partitions_old; j++) {
        h_st.site = &ye_emlrtRSI;
        if (maxdimlen > 2147483646) {
          i_st.site = &ib_emlrtRSI;
          coder::check_forloop_overflow_error(i_st);
        }

        for (int32_T b_i{0}; b_i < maxdimlen; b_i++) {
          start_idx = residuals[b_i + residuals.size(0) * (j - 1)];
          if (muDoubleScalarIsNaN(start_idx)) {
            out = false;
          } else if (muDoubleScalarIsNaN(b[b_i])) {
            out = true;
          } else {
            out = (b[b_i] > start_idx);
          }

          if (out) {
            b[b_i] = start_idx;
            idx[b_i] = j;
          }
        }
      }
    }

    b.set_size(&kd_emlrtRTEI, &st, idx.size(0));
    loop_ub = idx.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b[i1] = idx[i1];
    }

    // partitions{1} = [partitions{1},2]
    for (scalarLB_tmp = 0; scalarLB_tmp <= sample_size; scalarLB_tmp++) {
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, num_partitions, mxDOUBLE_CLASS,
        static_cast<int32_T>(num_partitions), &j_emlrtRTEI, (emlrtConstCTX)sp);
      for (int32_T j{0}; j < unnamed_idx_0_tmp_tmp_tmp; j++) {
        if (scalarLB_tmp + 1 > b.size(0)) {
          emlrtDynamicBoundsCheckR2012b(scalarLB_tmp + 1, 1, b.size(0),
            &rc_emlrtBCI, (emlrtConstCTX)sp);
        }

        if (static_cast<uint32_T>(b[scalarLB_tmp]) == static_cast<uint32_T>(j) +
            1U) {
          b_index.set_size(&ld_emlrtRTEI, sp, 1, b_index.size(1));
          i1 = partitions.size(0) - 1;
          if (j > partitions.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1,
              &cc_emlrtBCI, (emlrtConstCTX)sp);
          }

          b_index.set_size(&ld_emlrtRTEI, sp, b_index.size(0), partitions[j].
                           f1.size(1));
          if (j > partitions.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1,
              &cc_emlrtBCI, (emlrtConstCTX)sp);
          }

          loop_ub = partitions[j].f1.size(1);
          for (i2 = 0; i2 < loop_ub; i2++) {
            if (j > i1) {
              emlrtDynamicBoundsCheckR2012b(j, 0, i1, &tc_emlrtBCI,
                (emlrtConstCTX)sp);
            }

            b_index[i2] = partitions[j].f1[i2];
          }

          if (j > partitions.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1,
              &yb_emlrtBCI, (emlrtConstCTX)sp);
          }

          partitions[j].f1.set_size(&gb_emlrtRTEI, sp, partitions[j].f1.size(0),
            b_index.size(1) + 1);
          if (j > partitions.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1,
              &yb_emlrtBCI, (emlrtConstCTX)sp);
          }

          if (scalarLB_tmp + 1 > partitions_old[0].f1.size(1)) {
            emlrtDynamicBoundsCheckR2012b(scalarLB_tmp + 1, 1, partitions_old[0]
              .f1.size(1), &uc_emlrtBCI, (emlrtConstCTX)sp);
          }

          partitions[j].f1[b_index.size(1)] = partitions_old[0].f1[scalarLB_tmp];
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    emlrtForLoopVectorCheckR2021a(1.0, 1.0, num_partitions, mxDOUBLE_CLASS,
      static_cast<int32_T>(num_partitions), &i_emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T j{0}; j < unnamed_idx_0_tmp_tmp_tmp; j++) {
      i1 = partitions.size(0) - 1;
      if (j > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1, &e_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      if (partitions[j].f1.size(1) < 2) {
        i2 = 0;
        vectorUB_tmp = 0;
      } else {
        i2 = partitions[j].f1.size(1);
        if (i2 < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i2, &u_emlrtBCI, (emlrtConstCTX)sp);
        }

        i2 = 1;
        i3 = partitions[j].f1.size(1);
        vectorUB_tmp = partitions[j].f1.size(1);
        if ((vectorUB_tmp < 1) || (vectorUB_tmp > i3)) {
          emlrtDynamicBoundsCheckR2012b(vectorUB_tmp, 1, i3, &t_emlrtBCI,
            (emlrtConstCTX)sp);
        }
      }

      loop_ub = vectorUB_tmp - i2;
      b_index.set_size(&md_emlrtRTEI, sp, 1, loop_ub);
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_index[i3] = partitions[j].f1[i2 + i3];
      }

      if (j > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1, &dc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      partitions[j].f1.set_size(&nd_emlrtRTEI, sp, 1, partitions[j].f1.size(1));
      if (j > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1, &dc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      partitions[j].f1.set_size(&nd_emlrtRTEI, sp, partitions[j].f1.size(0),
        b_index.size(1));
      if (j > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1, &dc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      loop_ub = b_index.size(1);
      for (i2 = 0; i2 < loop_ub; i2++) {
        if (j > i1) {
          emlrtDynamicBoundsCheckR2012b(j, 0, i1, &vc_emlrtBCI, (emlrtConstCTX)
            sp);
        }

        partitions[j].f1[i2] = b_index[i2];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    if (static_cast<int32_T>(num_partitions) != i) {
      emlrtIntegerCheckR2012b(num_partitions, &pb_emlrtDCI, (emlrtConstCTX)sp);
    }

    combine.set_size(&od_emlrtRTEI, sp, static_cast<int32_T>(num_partitions));
    if (static_cast<int32_T>(num_partitions) != i) {
      emlrtIntegerCheckR2012b(num_partitions, &pb_emlrtDCI, (emlrtConstCTX)sp);
    }

    for (i1 = 0; i1 < unnamed_idx_0_tmp_tmp_tmp; i1++) {
      combine[i1] = 0.0;
    }

    emlrtForLoopVectorCheckR2021a(1.0, 1.0, num_partitions, mxDOUBLE_CLASS,
      static_cast<int32_T>(num_partitions), &h_emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T j{0}; j < unnamed_idx_0_tmp_tmp_tmp; j++) {
      if (j > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1, &d_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      if (j + 1 > combine.size(0)) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, combine.size(0), &sc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      combine[j] = partitions[j].f1.size(1);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    st.site = &ab_emlrtRSI;
    b_st.site = &cf_emlrtRSI;
    c_st.site = &df_emlrtRSI;
    d_st.site = &ef_emlrtRSI;
    if (combine.size(0) < 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &ff_emlrtRSI;
    f_st.site = &gf_emlrtRSI;
    if (combine.size(0) > 2) {
      g_st.site = &if_emlrtRSI;
      g_st.site = &hf_emlrtRSI;
      h_st.site = &jf_emlrtRSI;
      if (combine.size(0) > 2147483646) {
        i_st.site = &ib_emlrtRSI;
        coder::check_forloop_overflow_error(i_st);
      }
    }

    st.site = &bb_emlrtRSI;
    b_st.site = &cf_emlrtRSI;
    c_st.site = &df_emlrtRSI;
    d_st.site = &ef_emlrtRSI;
    e_st.site = &ff_emlrtRSI;
    f_st.site = &gf_emlrtRSI;
    maxdimlen = combine.size(0);
    if (combine.size(0) <= 2) {
      if (combine.size(0) == 1) {
        nx = static_cast<int32_T>(combine[0]);
      } else if (combine[0] > combine[1]) {
        nx = static_cast<int32_T>(combine[1]);
      } else {
        nx = static_cast<int32_T>(combine[0]);
      }
    } else {
      g_st.site = &if_emlrtRSI;
      g_st.site = &hf_emlrtRSI;
      nx = static_cast<int32_T>(combine[0]);
      h_st.site = &jf_emlrtRSI;
      for (scalarLB_tmp = 2; scalarLB_tmp <= maxdimlen; scalarLB_tmp++) {
        i1 = static_cast<int32_T>(combine[scalarLB_tmp - 1]);
        if (nx > i1) {
          nx = i1;
        }
      }
    }

    st.site = &bb_emlrtRSI;
    b_combine.set_size(&pd_emlrtRTEI, &st, combine.size(0));
    loop_ub = combine.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_combine[i1] = (static_cast<int32_T>(combine[i1]) == nx);
    }

    b_st.site = &kf_emlrtRSI;
    coder::eml_find(b_st, b_combine, sf_emlrtRSI);

    // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%合并机制
    // while (combine_index < combine_principle)
    // num_partitions = num_partitions - length(combine_min_index);
    // residuals(:,combine_min_index) = [];
    // coefficients(:,combine_min_index) = [];
    // %%%%%%%%%%%%%%%重复上面的操作
    // partitions = cell(num_partitions,1);
    // [~, min_col_indices] = min(residuals, [], 2);
    // partitions{1} = [partitions{1},2]
    // for k = 1:sample_size
    //     for j = 1:num_partitions
    //         if min_col_indices(k)==j
    //             partitions{j} = [partitions{j},partitions_old{1}(k)];
    //         end
    //     end
    // end
    // combine = zeros(num_partitions,1);
    // for j = 1:num_partitions
    //     combine(j,1) = length(partitions{j});
    // end
    // combine_index = min(combine);
    // combine_min_index = find(combine==min(combine));
    // end
    iter_initial_out++;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, num_partitions, mxDOUBLE_CLASS,
      static_cast<int32_T>(num_partitions), &g_emlrtRTEI, (emlrtConstCTX)sp);
    for (int32_T j{0}; j < unnamed_idx_0_tmp_tmp_tmp; j++) {
      i1 = partitions.size(0) - 1;
      if (j > partitions.size(0) - 1) {
        emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1, &c_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i2 = partitions[j].f1.size(1);
      if (partitions[j].f1.size(1) - 1 >= 0) {
        if (row_size < 1.0) {
          c_loop_ub = 0;
        } else {
          if (coefficients.size(0) < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, coefficients.size(0),
              &s_emlrtBCI, (emlrtConstCTX)sp);
          }

          if (row_size != static_cast<int32_T>(muDoubleScalarFloor(row_size))) {
            emlrtIntegerCheckR2012b(row_size, &g_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(row_size) < 1) || (static_cast<int32_T>
               (row_size) > coefficients.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(row_size), 1,
              coefficients.size(0), &r_emlrtBCI, (emlrtConstCTX)sp);
          }

          c_loop_ub = static_cast<int32_T>(row_size);
        }

        if (row_size + 1.0 > d) {
          i4 = 1;
          i5 = 0;
        } else {
          if (row_size + 1.0 != static_cast<int32_T>(muDoubleScalarFloor
               (row_size + 1.0))) {
            emlrtIntegerCheckR2012b(row_size + 1.0, &f_emlrtDCI, (emlrtConstCTX)
              sp);
          }

          if ((static_cast<int32_T>(row_size + 1.0) < 1) || (static_cast<int32_T>
               (row_size + 1.0) > coefficients.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(row_size + 1.0),
              1, coefficients.size(0), &p_emlrtBCI, (emlrtConstCTX)sp);
          }

          i4 = static_cast<int32_T>(row_size + 1.0);
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &e_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
               coefficients.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
              coefficients.size(0), &o_emlrtBCI, (emlrtConstCTX)sp);
          }

          i5 = static_cast<int32_T>(d);
        }

        d_loop_ub = i5 - i4;
      }

      for (scalarLB_tmp = 0; scalarLB_tmp < i2; scalarLB_tmp++) {
        if (j > i1) {
          emlrtDynamicBoundsCheckR2012b(j, 0, i1, &b_emlrtBCI, (emlrtConstCTX)sp);
        }

        i3 = partitions[j].f1.size(1);
        if (static_cast<int32_T>(static_cast<uint32_T>(scalarLB_tmp) + 1U) > i3)
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
            (static_cast<uint32_T>(scalarLB_tmp) + 1U), 1, i3, &wc_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        d2 = partitions[j].f1[scalarLB_tmp];
        end_idx = (d2 - 1.0) * row_size + 1.0;
        i3 = partitions[j].f1.size(1);
        if (static_cast<int32_T>(static_cast<uint32_T>(scalarLB_tmp) + 1U) > i3)
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
            (static_cast<uint32_T>(scalarLB_tmp) + 1U), 1, i3, &xc_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        iter_initial_in = d2 * row_size;
        if (end_idx > iter_initial_in) {
          i3 = 0;
          vectorUB_tmp = 0;
        } else {
          if (end_idx != static_cast<int32_T>(muDoubleScalarFloor(end_idx))) {
            emlrtIntegerCheckR2012b(end_idx, &d_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(end_idx) < 1) || (static_cast<int32_T>
               (end_idx) > beta_back.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(end_idx), 1,
              beta_back.size(0), &m_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = static_cast<int32_T>(end_idx) - 1;
          if (iter_initial_in != static_cast<int32_T>(muDoubleScalarFloor
               (iter_initial_in))) {
            emlrtIntegerCheckR2012b(iter_initial_in, &c_emlrtDCI, (emlrtConstCTX)
              sp);
          }

          if ((static_cast<int32_T>(iter_initial_in) < 1) ||
              (static_cast<int32_T>(iter_initial_in) > beta_back.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(iter_initial_in),
              1, beta_back.size(0), &l_emlrtBCI, (emlrtConstCTX)sp);
          }

          vectorUB_tmp = static_cast<int32_T>(iter_initial_in);
        }

        if (j + 1 > coefficients.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, coefficients.size(1),
            &q_emlrtBCI, (emlrtConstCTX)sp);
        }

        b_partitions_old = vectorUB_tmp - i3;
        emlrtSubAssignSizeCheckR2012b(&b_partitions_old, 1, &c_loop_ub, 1,
          &c_emlrtECI, (emlrtCTX)sp);
        for (vectorUB_tmp = 0; vectorUB_tmp < c_loop_ub; vectorUB_tmp++) {
          beta_back[i3 + vectorUB_tmp] = coefficients[vectorUB_tmp +
            coefficients.size(0) * j];
        }

        if (j > i1) {
          emlrtDynamicBoundsCheckR2012b(j, 0, i1, &emlrtBCI, (emlrtConstCTX)sp);
        }

        i3 = partitions[j].f1.size(1);
        if (static_cast<int32_T>(static_cast<uint32_T>(scalarLB_tmp) + 1U) > i3)
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
            (static_cast<uint32_T>(scalarLB_tmp) + 1U), 1, i3, &ad_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        end_idx = (d2 - 1.0) * col_size + 1.0;
        i3 = partitions[j].f1.size(1);
        if (static_cast<int32_T>(static_cast<uint32_T>(scalarLB_tmp) + 1U) > i3)
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>
            (static_cast<uint32_T>(scalarLB_tmp) + 1U), 1, i3, &bd_emlrtBCI,
            (emlrtConstCTX)sp);
        }

        d2 *= col_size;
        if (end_idx > d2) {
          i3 = 0;
          vectorUB_tmp = 0;
        } else {
          if (end_idx != static_cast<int32_T>(muDoubleScalarFloor(end_idx))) {
            emlrtIntegerCheckR2012b(end_idx, &b_emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(end_idx) < 1) || (static_cast<int32_T>
               (end_idx) > gamma_back.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(end_idx), 1,
              gamma_back.size(0), &k_emlrtBCI, (emlrtConstCTX)sp);
          }

          i3 = static_cast<int32_T>(end_idx) - 1;
          if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
            emlrtIntegerCheckR2012b(d2, &emlrtDCI, (emlrtConstCTX)sp);
          }

          if ((static_cast<int32_T>(d2) < 1) || (static_cast<int32_T>(d2) >
               gamma_back.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
              gamma_back.size(0), &j_emlrtBCI, (emlrtConstCTX)sp);
          }

          vectorUB_tmp = static_cast<int32_T>(d2);
        }

        if (j + 1 > coefficients.size(1)) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, coefficients.size(1),
            &n_emlrtBCI, (emlrtConstCTX)sp);
        }

        b_partitions_old = vectorUB_tmp - i3;
        nx = (i5 - i4) + 1;
        emlrtSubAssignSizeCheckR2012b(&b_partitions_old, 1, &nx, 1, &b_emlrtECI,
          (emlrtCTX)sp);
        for (vectorUB_tmp = 0; vectorUB_tmp <= d_loop_ub; vectorUB_tmp++) {
          gamma_back[i3 + vectorUB_tmp] = coefficients[((i4 + vectorUB_tmp) +
            coefficients.size(0) * j) - 1];
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }

    // beta_back
    // gamma_back
    // coefficients
    // partitions
    // combine
    b_partitions.set_size(&qd_emlrtRTEI, sp, beta_back.size(0) + gamma_back.size
                          (0));
    loop_ub = beta_back.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_partitions[i1] = beta_back[i1];
    }

    loop_ub = gamma_back.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_partitions[i1 + beta_back.size(0)] = gamma_back[i1];
    }

    b.set_size(&rd_emlrtRTEI, sp, beta_back0.size(0) + gamma_back0.size(0));
    loop_ub = beta_back0.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b[i1] = beta_back0[i1];
    }

    loop_ub = gamma_back0.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b[i1 + beta_back0.size(0)] = gamma_back0[i1];
    }

    if ((b_partitions.size(0) != b.size(0)) && ((b_partitions.size(0) != 1) &&
         (b.size(0) != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_partitions.size(0), b.size(0), &emlrtECI,
        (emlrtConstCTX)sp);
    }

    if (b_partitions.size(0) == b.size(0)) {
      loop_ub = b_partitions.size(0);
      maxdimlen = (b_partitions.size(0) / 2) << 1;
      vectorUB = maxdimlen - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        r1 = _mm_loadu_pd(&b_partitions[i1]);
        r2 = _mm_loadu_pd(&b[i1]);
        _mm_storeu_pd(&b_partitions[i1], _mm_sub_pd(r1, r2));
      }

      for (i1 = maxdimlen; i1 < loop_ub; i1++) {
        b_partitions[i1] = b_partitions[i1] - b[i1];
      }

      *residual_coefficients = coder::b_norm(b_partitions);
    } else {
      st.site = &rf_emlrtRSI;
      *residual_coefficients = binary_expand_op(st, b_partitions, b);
    }

    beta_back0.set_size(&sd_emlrtRTEI, sp, beta_back.size(0));
    loop_ub = beta_back.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      beta_back0[i1] = beta_back[i1];
    }

    // 返回初值结果
    gamma_back0.set_size(&td_emlrtRTEI, sp, gamma_back.size(0));
    loop_ub = gamma_back.size(0);
    for (i1 = 0; i1 < loop_ub; i1++) {
      gamma_back0[i1] = gamma_back[i1];
    }

    // 返回初值结果
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  if (static_cast<int32_T>(num_partitions) != i) {
    emlrtIntegerCheckR2012b(num_partitions, &lb_emlrtDCI, (emlrtConstCTX)sp);
  }

  combine.set_size(&ub_emlrtRTEI, sp, static_cast<int32_T>(num_partitions));
  if (static_cast<int32_T>(num_partitions) != i) {
    emlrtIntegerCheckR2012b(num_partitions, &lb_emlrtDCI, (emlrtConstCTX)sp);
  }

  for (i = 0; i < unnamed_idx_0_tmp_tmp_tmp; i++) {
    combine[i] = 0.0;
  }

  emlrtForLoopVectorCheckR2021a(1.0, 1.0, num_partitions, mxDOUBLE_CLASS,
    static_cast<int32_T>(num_partitions), &f_emlrtRTEI, (emlrtConstCTX)sp);
  for (int32_T j{0}; j < unnamed_idx_0_tmp_tmp_tmp; j++) {
    if (j > partitions.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(j, 0, partitions.size(0) - 1, &h_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (j + 1 > combine.size(0)) {
      emlrtDynamicBoundsCheckR2012b(j + 1, 1, combine.size(0), &jc_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    combine[j] = partitions[j].f1.size(1);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  // beta_back
  // gamma_back
  // coefficients
  // partitions
  // combine
  // residual_coefficients
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (k_means_regression_tree_single.cpp)
