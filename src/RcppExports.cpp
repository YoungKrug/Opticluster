// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// MatrixToOpiMatrixCluster
std::string MatrixToOpiMatrixCluster(const std::vector<int>& xPosition, const std::vector<int>& yPosition, const std::vector<double>& data, const double cutoff, const int iterations, const bool shuffle);
RcppExport SEXP _Opticluster_MatrixToOpiMatrixCluster(SEXP xPositionSEXP, SEXP yPositionSEXP, SEXP dataSEXP, SEXP cutoffSEXP, SEXP iterationsSEXP, SEXP shuffleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type xPosition(xPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type yPosition(yPositionSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< const int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< const bool >::type shuffle(shuffleSEXP);
    rcpp_result_gen = Rcpp::wrap(MatrixToOpiMatrixCluster(xPosition, yPosition, data, cutoff, iterations, shuffle));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_Opticluster_MatrixToOpiMatrixCluster", (DL_FUNC) &_Opticluster_MatrixToOpiMatrixCluster, 6},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_Opticluster(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
