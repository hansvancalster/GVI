// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// VGVI_cpp
Rcpp::NumericVector VGVI_cpp(Rcpp::S4& dsm, const Rcpp::NumericVector& dsm_values, Rcpp::S4& greenspace, const Rcpp::NumericVector& greenspace_values, const Rcpp::IntegerVector x0, const Rcpp::IntegerVector y0, const int radius, const Rcpp::NumericVector& h0, const int fun, const double m, const double b);
RcppExport SEXP _GVI_VGVI_cpp(SEXP dsmSEXP, SEXP dsm_valuesSEXP, SEXP greenspaceSEXP, SEXP greenspace_valuesSEXP, SEXP x0SEXP, SEXP y0SEXP, SEXP radiusSEXP, SEXP h0SEXP, SEXP funSEXP, SEXP mSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4& >::type dsm(dsmSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type dsm_values(dsm_valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type greenspace(greenspaceSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type greenspace_values(greenspace_valuesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< const int >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type h0(h0SEXP);
    Rcpp::traits::input_parameter< const int >::type fun(funSEXP);
    Rcpp::traits::input_parameter< const double >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(VGVI_cpp(dsm, dsm_values, greenspace, greenspace_values, x0, y0, radius, h0, fun, m, b));
    return rcpp_result_gen;
END_RCPP
}
// viewshed_cpp
Rcpp::IntegerVector viewshed_cpp(Rcpp::S4& dsm, const Rcpp::NumericVector& dsm_values, const Rcpp::IntegerVector x0, const Rcpp::IntegerVector y0, const int radius, const Rcpp::NumericVector& h0);
RcppExport SEXP _GVI_viewshed_cpp(SEXP dsmSEXP, SEXP dsm_valuesSEXP, SEXP x0SEXP, SEXP y0SEXP, SEXP radiusSEXP, SEXP h0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4& >::type dsm(dsmSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type dsm_values(dsm_valuesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< const int >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type h0(h0SEXP);
    rcpp_result_gen = Rcpp::wrap(viewshed_cpp(dsm, dsm_values, x0, y0, radius, h0));
    return rcpp_result_gen;
END_RCPP
}
// viewshed_distance_analysis_cpp
Rcpp::IntegerMatrix viewshed_distance_analysis_cpp(Rcpp::S4& dsm, const Rcpp::NumericVector& dsm_values, const Rcpp::IntegerVector x0, const Rcpp::IntegerVector y0, const int radius, const Rcpp::NumericVector& h0, const int ncores, const bool display_progress);
RcppExport SEXP _GVI_viewshed_distance_analysis_cpp(SEXP dsmSEXP, SEXP dsm_valuesSEXP, SEXP x0SEXP, SEXP y0SEXP, SEXP radiusSEXP, SEXP h0SEXP, SEXP ncoresSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4& >::type dsm(dsmSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type dsm_values(dsm_valuesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< const int >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type h0(h0SEXP);
    Rcpp::traits::input_parameter< const int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< const bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(viewshed_distance_analysis_cpp(dsm, dsm_values, x0, y0, radius, h0, ncores, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// viewshed_and_greenness_distance_analysis_cpp
Rcpp::IntegerMatrix viewshed_and_greenness_distance_analysis_cpp(Rcpp::S4& dsm, const Rcpp::NumericVector& dsm_values, Rcpp::S4& greenspace, const Rcpp::NumericVector& greenspace_values, const Rcpp::IntegerVector x0, const Rcpp::IntegerVector y0, const int radius, const Rcpp::NumericVector& h0, const int ncores, const bool display_progress);
RcppExport SEXP _GVI_viewshed_and_greenness_distance_analysis_cpp(SEXP dsmSEXP, SEXP dsm_valuesSEXP, SEXP greenspaceSEXP, SEXP greenspace_valuesSEXP, SEXP x0SEXP, SEXP y0SEXP, SEXP radiusSEXP, SEXP h0SEXP, SEXP ncoresSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4& >::type dsm(dsmSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type dsm_values(dsm_valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type greenspace(greenspaceSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type greenspace_values(greenspace_valuesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< const int >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type h0(h0SEXP);
    Rcpp::traits::input_parameter< const int >::type ncores(ncoresSEXP);
    Rcpp::traits::input_parameter< const bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(viewshed_and_greenness_distance_analysis_cpp(dsm, dsm_values, greenspace, greenspace_values, x0, y0, radius, h0, ncores, display_progress));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GVI_VGVI_cpp", (DL_FUNC) &_GVI_VGVI_cpp, 11},
    {"_GVI_viewshed_cpp", (DL_FUNC) &_GVI_viewshed_cpp, 6},
    {"_GVI_viewshed_distance_analysis_cpp", (DL_FUNC) &_GVI_viewshed_distance_analysis_cpp, 8},
    {"_GVI_viewshed_and_greenness_distance_analysis_cpp", (DL_FUNC) &_GVI_viewshed_and_greenness_distance_analysis_cpp, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_GVI(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
