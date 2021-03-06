// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// negative_check
void negative_check(NumericVector dat);
RcppExport SEXP _ptsuite_negative_check(SEXP datSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dat(datSEXP);
    negative_check(dat);
    return R_NilValue;
END_RCPP
}
// alpha_mle
List alpha_mle(NumericVector dat, bool biased, Rcpp::Nullable<double> significance);
RcppExport SEXP _ptsuite_alpha_mle(SEXP datSEXP, SEXP biasedSEXP, SEXP significanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dat(datSEXP);
    Rcpp::traits::input_parameter< bool >::type biased(biasedSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<double> >::type significance(significanceSEXP);
    rcpp_result_gen = Rcpp::wrap(alpha_mle(dat, biased, significance));
    return rcpp_result_gen;
END_RCPP
}
// alpha_wls
List alpha_wls(NumericVector dat);
RcppExport SEXP _ptsuite_alpha_wls(SEXP datSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dat(datSEXP);
    rcpp_result_gen = Rcpp::wrap(alpha_wls(dat));
    return rcpp_result_gen;
END_RCPP
}
// alpha_hills
List alpha_hills(NumericVector dat, double k, bool value);
RcppExport SEXP _ptsuite_alpha_hills(SEXP datSEXP, SEXP kSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dat(datSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(alpha_hills(dat, k, value));
    return rcpp_result_gen;
END_RCPP
}
// alpha_moment
List alpha_moment(NumericVector dat);
RcppExport SEXP _ptsuite_alpha_moment(SEXP datSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dat(datSEXP);
    rcpp_result_gen = Rcpp::wrap(alpha_moment(dat));
    return rcpp_result_gen;
END_RCPP
}
// get_Percentiles
NumericVector get_Percentiles(NumericVector x, NumericVector p);
RcppExport SEXP _ptsuite_get_Percentiles(SEXP xSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(get_Percentiles(x, p));
    return rcpp_result_gen;
END_RCPP
}
// alpha_percentile
List alpha_percentile(NumericVector dat);
RcppExport SEXP _ptsuite_alpha_percentile(SEXP datSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dat(datSEXP);
    rcpp_result_gen = Rcpp::wrap(alpha_percentile(dat));
    return rcpp_result_gen;
END_RCPP
}
// alpha_modified_percentile
List alpha_modified_percentile(NumericVector dat);
RcppExport SEXP _ptsuite_alpha_modified_percentile(SEXP datSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dat(datSEXP);
    rcpp_result_gen = Rcpp::wrap(alpha_modified_percentile(dat));
    return rcpp_result_gen;
END_RCPP
}
// GeoMean
double GeoMean(NumericVector x);
RcppExport SEXP _ptsuite_GeoMean(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(GeoMean(x));
    return rcpp_result_gen;
END_RCPP
}
// alpha_geometric_percentile
List alpha_geometric_percentile(NumericVector dat);
RcppExport SEXP _ptsuite_alpha_geometric_percentile(SEXP datSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dat(datSEXP);
    rcpp_result_gen = Rcpp::wrap(alpha_geometric_percentile(dat));
    return rcpp_result_gen;
END_RCPP
}
// alpha_ls
List alpha_ls(NumericVector dat);
RcppExport SEXP _ptsuite_alpha_ls(SEXP datSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dat(datSEXP);
    rcpp_result_gen = Rcpp::wrap(alpha_ls(dat));
    return rcpp_result_gen;
END_RCPP
}
// pareto_test
List pareto_test(NumericVector dat);
RcppExport SEXP _ptsuite_pareto_test(SEXP datSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type dat(datSEXP);
    rcpp_result_gen = Rcpp::wrap(pareto_test(dat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ptsuite_negative_check", (DL_FUNC) &_ptsuite_negative_check, 1},
    {"_ptsuite_alpha_mle", (DL_FUNC) &_ptsuite_alpha_mle, 3},
    {"_ptsuite_alpha_wls", (DL_FUNC) &_ptsuite_alpha_wls, 1},
    {"_ptsuite_alpha_hills", (DL_FUNC) &_ptsuite_alpha_hills, 3},
    {"_ptsuite_alpha_moment", (DL_FUNC) &_ptsuite_alpha_moment, 1},
    {"_ptsuite_get_Percentiles", (DL_FUNC) &_ptsuite_get_Percentiles, 2},
    {"_ptsuite_alpha_percentile", (DL_FUNC) &_ptsuite_alpha_percentile, 1},
    {"_ptsuite_alpha_modified_percentile", (DL_FUNC) &_ptsuite_alpha_modified_percentile, 1},
    {"_ptsuite_GeoMean", (DL_FUNC) &_ptsuite_GeoMean, 1},
    {"_ptsuite_alpha_geometric_percentile", (DL_FUNC) &_ptsuite_alpha_geometric_percentile, 1},
    {"_ptsuite_alpha_ls", (DL_FUNC) &_ptsuite_alpha_ls, 1},
    {"_ptsuite_pareto_test", (DL_FUNC) &_ptsuite_pareto_test, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_ptsuite(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
