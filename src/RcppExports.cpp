// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// InforEntropy
double InforEntropy(NumericVector x);
RcppExport SEXP _geocomplexity_InforEntropy(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(InforEntropy(x));
    return rcpp_result_gen;
END_RCPP
}
// spatial_variance
double spatial_variance(NumericVector x, NumericMatrix wt);
RcppExport SEXP _geocomplexity_spatial_variance(SEXP xSEXP, SEXP wtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type wt(wtSEXP);
    rcpp_result_gen = Rcpp::wrap(spatial_variance(x, wt));
    return rcpp_result_gen;
END_RCPP
}
// GeoCSWT
NumericMatrix GeoCSWT(NumericVector x, NumericMatrix wt, String style);
RcppExport SEXP _geocomplexity_GeoCSWT(SEXP xSEXP, SEXP wtSEXP, SEXP styleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type wt(wtSEXP);
    Rcpp::traits::input_parameter< String >::type style(styleSEXP);
    rcpp_result_gen = Rcpp::wrap(GeoCSWT(x, wt, style));
    return rcpp_result_gen;
END_RCPP
}
// MI_vec
Rcpp::DataFrame MI_vec(arma::mat x, arma::mat W, std::string alternative, bool symmetrize);
RcppExport SEXP _geocomplexity_MI_vec(SEXP xSEXP, SEXP WSEXP, SEXP alternativeSEXP, SEXP symmetrizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< std::string >::type alternative(alternativeSEXP);
    Rcpp::traits::input_parameter< bool >::type symmetrize(symmetrizeSEXP);
    rcpp_result_gen = Rcpp::wrap(MI_vec(x, W, alternative, symmetrize));
    return rcpp_result_gen;
END_RCPP
}
// print_global_moranI
DataFrame print_global_moranI(DataFrame df);
RcppExport SEXP _geocomplexity_print_global_moranI(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(print_global_moranI(df));
    return rcpp_result_gen;
END_RCPP
}
// RasterGeoCMoranOne
double RasterGeoCMoranOne(NumericVector x, size_t ni, size_t nw);
RcppExport SEXP _geocomplexity_RasterGeoCMoranOne(SEXP xSEXP, SEXP niSEXP, SEXP nwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< size_t >::type ni(niSEXP);
    Rcpp::traits::input_parameter< size_t >::type nw(nwSEXP);
    rcpp_result_gen = Rcpp::wrap(RasterGeoCMoranOne(x, ni, nw));
    return rcpp_result_gen;
END_RCPP
}
// RasterGeoCMoran
NumericVector RasterGeoCMoran(NumericVector x, size_t ni, size_t nw);
RcppExport SEXP _geocomplexity_RasterGeoCMoran(SEXP xSEXP, SEXP niSEXP, SEXP nwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< size_t >::type ni(niSEXP);
    Rcpp::traits::input_parameter< size_t >::type nw(nwSEXP);
    rcpp_result_gen = Rcpp::wrap(RasterGeoCMoran(x, ni, nw));
    return rcpp_result_gen;
END_RCPP
}
// RasterGeoCSSH
NumericVector RasterGeoCSSH(NumericVector x, IntegerMatrix iw, int w, String method);
RcppExport SEXP _geocomplexity_RasterGeoCSSH(SEXP xSEXP, SEXP iwSEXP, SEXP wSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type iw(iwSEXP);
    Rcpp::traits::input_parameter< int >::type w(wSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(RasterGeoCSSH(x, iw, w, method));
    return rcpp_result_gen;
END_RCPP
}
// RasterGeoCSimilarity
NumericVector RasterGeoCSimilarity(NumericMatrix x, IntegerMatrix iw, int w, int similarity, String method);
RcppExport SEXP _geocomplexity_RasterGeoCSimilarity(SEXP xSEXP, SEXP iwSEXP, SEXP wSEXP, SEXP similaritySEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type iw(iwSEXP);
    Rcpp::traits::input_parameter< int >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type similarity(similaritySEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(RasterGeoCSimilarity(x, iw, w, similarity, method));
    return rcpp_result_gen;
END_RCPP
}
// VectorGeoCMoran
NumericVector VectorGeoCMoran(NumericVector x, NumericMatrix wt);
RcppExport SEXP _geocomplexity_VectorGeoCMoran(SEXP xSEXP, SEXP wtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type wt(wtSEXP);
    rcpp_result_gen = Rcpp::wrap(VectorGeoCMoran(x, wt));
    return rcpp_result_gen;
END_RCPP
}
// VectorGeoCSSH
NumericVector VectorGeoCSSH(NumericVector xobs, NumericMatrix wt, String method);
RcppExport SEXP _geocomplexity_VectorGeoCSSH(SEXP xobsSEXP, SEXP wtSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type xobs(xobsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type wt(wtSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(VectorGeoCSSH(xobs, wt, method));
    return rcpp_result_gen;
END_RCPP
}
// VectorGeoCSimilarity
NumericVector VectorGeoCSimilarity(NumericMatrix xobs, NumericMatrix wt, int similarity, String method);
RcppExport SEXP _geocomplexity_VectorGeoCSimilarity(SEXP xobsSEXP, SEXP wtSEXP, SEXP similaritySEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xobs(xobsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type wt(wtSEXP);
    Rcpp::traits::input_parameter< int >::type similarity(similaritySEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(VectorGeoCSimilarity(xobs, wt, similarity, method));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_geocomplexity_InforEntropy", (DL_FUNC) &_geocomplexity_InforEntropy, 1},
    {"_geocomplexity_spatial_variance", (DL_FUNC) &_geocomplexity_spatial_variance, 2},
    {"_geocomplexity_GeoCSWT", (DL_FUNC) &_geocomplexity_GeoCSWT, 3},
    {"_geocomplexity_MI_vec", (DL_FUNC) &_geocomplexity_MI_vec, 4},
    {"_geocomplexity_print_global_moranI", (DL_FUNC) &_geocomplexity_print_global_moranI, 1},
    {"_geocomplexity_RasterGeoCMoranOne", (DL_FUNC) &_geocomplexity_RasterGeoCMoranOne, 3},
    {"_geocomplexity_RasterGeoCMoran", (DL_FUNC) &_geocomplexity_RasterGeoCMoran, 3},
    {"_geocomplexity_RasterGeoCSSH", (DL_FUNC) &_geocomplexity_RasterGeoCSSH, 4},
    {"_geocomplexity_RasterGeoCSimilarity", (DL_FUNC) &_geocomplexity_RasterGeoCSimilarity, 5},
    {"_geocomplexity_VectorGeoCMoran", (DL_FUNC) &_geocomplexity_VectorGeoCMoran, 2},
    {"_geocomplexity_VectorGeoCSSH", (DL_FUNC) &_geocomplexity_VectorGeoCSSH, 3},
    {"_geocomplexity_VectorGeoCSimilarity", (DL_FUNC) &_geocomplexity_VectorGeoCSimilarity, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_geocomplexity(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
