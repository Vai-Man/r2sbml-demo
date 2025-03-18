// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// add_numbers
int add_numbers(int a, int b);
RcppExport SEXP _demoRcppPkg_add_numbers(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(add_numbers(a, b));
    return rcpp_result_gen;
END_RCPP
}
// read_sbml
Rcpp::List read_sbml(std::string file_path);
RcppExport SEXP _demoRcppPkg_read_sbml(SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_path(file_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(read_sbml(file_path));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_demoRcppPkg_add_numbers", (DL_FUNC) &_demoRcppPkg_add_numbers, 2},
    {"_demoRcppPkg_read_sbml", (DL_FUNC) &_demoRcppPkg_read_sbml, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_demoRcppPkg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
