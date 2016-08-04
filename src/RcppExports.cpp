// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// get_component_
CharacterVector get_component_(CharacterVector urls, int component);
RcppExport SEXP urltools_get_component_(SEXP urlsSEXP, SEXP componentSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< int >::type component(componentSEXP);
    __result = Rcpp::wrap(get_component_(urls, component));
    return __result;
END_RCPP
}
// set_component_
CharacterVector set_component_(CharacterVector urls, int component, String new_value);
RcppExport SEXP urltools_set_component_(SEXP urlsSEXP, SEXP componentSEXP, SEXP new_valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< int >::type component(componentSEXP);
    Rcpp::traits::input_parameter< String >::type new_value(new_valueSEXP);
    __result = Rcpp::wrap(set_component_(urls, component, new_value));
    return __result;
END_RCPP
}
// param_get
List param_get(std::vector < std::string > urls, std::vector < std::string > parameter_names);
RcppExport SEXP urltools_param_get(SEXP urlsSEXP, SEXP parameter_namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type parameter_names(parameter_namesSEXP);
    __result = Rcpp::wrap(param_get(urls, parameter_names));
    return __result;
END_RCPP
}
// param_set
std::vector < std::string > param_set(std::vector < std::string > urls, std::string key, std::vector < std::string > value);
RcppExport SEXP urltools_param_set(SEXP urlsSEXP, SEXP keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< std::string >::type key(keySEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type value(valueSEXP);
    __result = Rcpp::wrap(param_set(urls, key, value));
    return __result;
END_RCPP
}
// param_remove
std::vector < std::string > param_remove(std::vector < std::string > urls, std::vector < std::string > keys);
RcppExport SEXP urltools_param_remove(SEXP urlsSEXP, SEXP keysSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type keys(keysSEXP);
    __result = Rcpp::wrap(param_remove(urls, keys));
    return __result;
END_RCPP
}
// reverse_strings
CharacterVector reverse_strings(CharacterVector strings);
RcppExport SEXP urltools_reverse_strings(SEXP stringsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type strings(stringsSEXP);
    __result = Rcpp::wrap(reverse_strings(strings));
    return __result;
END_RCPP
}
// finalise_suffixes
DataFrame finalise_suffixes(CharacterVector full_domains, CharacterVector suffixes, LogicalVector wildcard);
RcppExport SEXP urltools_finalise_suffixes(SEXP full_domainsSEXP, SEXP suffixesSEXP, SEXP wildcardSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type full_domains(full_domainsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type suffixes(suffixesSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type wildcard(wildcardSEXP);
    __result = Rcpp::wrap(finalise_suffixes(full_domains, suffixes, wildcard));
    return __result;
END_RCPP
}
// tld_extract_
CharacterVector tld_extract_(CharacterVector domains);
RcppExport SEXP urltools_tld_extract_(SEXP domainsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type domains(domainsSEXP);
    __result = Rcpp::wrap(tld_extract_(domains));
    return __result;
END_RCPP
}
// host_extract_
CharacterVector host_extract_(CharacterVector domains);
RcppExport SEXP urltools_host_extract_(SEXP domainsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type domains(domainsSEXP);
    __result = Rcpp::wrap(host_extract_(domains));
    return __result;
END_RCPP
}
// url_decode
CharacterVector url_decode(CharacterVector urls);
RcppExport SEXP urltools_url_decode(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    __result = Rcpp::wrap(url_decode(urls));
    return __result;
END_RCPP
}
// url_encode
CharacterVector url_encode(CharacterVector urls);
RcppExport SEXP urltools_url_encode(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    __result = Rcpp::wrap(url_encode(urls));
    return __result;
END_RCPP
}
// url_parse
DataFrame url_parse(CharacterVector urls);
RcppExport SEXP urltools_url_parse(SEXP urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type urls(urlsSEXP);
    __result = Rcpp::wrap(url_parse(urls));
    return __result;
END_RCPP
}
// url_compose
CharacterVector url_compose(DataFrame parsed_urls);
RcppExport SEXP urltools_url_compose(SEXP parsed_urlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type parsed_urls(parsed_urlsSEXP);
    __result = Rcpp::wrap(url_compose(parsed_urls));
    return __result;
END_RCPP
}
