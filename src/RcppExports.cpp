// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// init_context
SEXP init_context(int threads);
RcppExport SEXP _clustermq_init_context(SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(init_context(threads));
    return rcpp_result_gen;
END_RCPP
}
// init_socket
SEXP init_socket(SEXP context_, std::string socket_type_);
RcppExport SEXP _clustermq_init_socket(SEXP context_SEXP, SEXP socket_type_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type context_(context_SEXP);
    Rcpp::traits::input_parameter< std::string >::type socket_type_(socket_type_SEXP);
    rcpp_result_gen = Rcpp::wrap(init_socket(context_, socket_type_));
    return rcpp_result_gen;
END_RCPP
}
// init_message
SEXP init_message(SEXP data_);
RcppExport SEXP _clustermq_init_message(SEXP data_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data_(data_SEXP);
    rcpp_result_gen = Rcpp::wrap(init_message(data_));
    return rcpp_result_gen;
END_RCPP
}
// bind_socket
void bind_socket(SEXP socket_, std::string address);
RcppExport SEXP _clustermq_bind_socket(SEXP socket_SEXP, SEXP addressSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type socket_(socket_SEXP);
    Rcpp::traits::input_parameter< std::string >::type address(addressSEXP);
    bind_socket(socket_, address);
    return R_NilValue;
END_RCPP
}
// connect_socket
void connect_socket(SEXP socket_, std::string address);
RcppExport SEXP _clustermq_connect_socket(SEXP socket_SEXP, SEXP addressSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type socket_(socket_SEXP);
    Rcpp::traits::input_parameter< std::string >::type address(addressSEXP);
    connect_socket(socket_, address);
    return R_NilValue;
END_RCPP
}
// disconnect_socket
void disconnect_socket(SEXP socket_, std::string address);
RcppExport SEXP _clustermq_disconnect_socket(SEXP socket_SEXP, SEXP addressSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type socket_(socket_SEXP);
    Rcpp::traits::input_parameter< std::string >::type address(addressSEXP);
    disconnect_socket(socket_, address);
    return R_NilValue;
END_RCPP
}
// poll_socket
SEXP poll_socket(SEXP sockets_, int timeout);
RcppExport SEXP _clustermq_poll_socket(SEXP sockets_SEXP, SEXP timeoutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sockets_(sockets_SEXP);
    Rcpp::traits::input_parameter< int >::type timeout(timeoutSEXP);
    rcpp_result_gen = Rcpp::wrap(poll_socket(sockets_, timeout));
    return rcpp_result_gen;
END_RCPP
}
// receive_socket
SEXP receive_socket(SEXP socket_, bool dont_wait, bool unserialize);
RcppExport SEXP _clustermq_receive_socket(SEXP socket_SEXP, SEXP dont_waitSEXP, SEXP unserializeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type socket_(socket_SEXP);
    Rcpp::traits::input_parameter< bool >::type dont_wait(dont_waitSEXP);
    Rcpp::traits::input_parameter< bool >::type unserialize(unserializeSEXP);
    rcpp_result_gen = Rcpp::wrap(receive_socket(socket_, dont_wait, unserialize));
    return rcpp_result_gen;
END_RCPP
}
// send_socket
void send_socket(SEXP socket_, SEXP data_, bool dont_wait, bool send_more);
RcppExport SEXP _clustermq_send_socket(SEXP socket_SEXP, SEXP data_SEXP, SEXP dont_waitSEXP, SEXP send_moreSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type socket_(socket_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type data_(data_SEXP);
    Rcpp::traits::input_parameter< bool >::type dont_wait(dont_waitSEXP);
    Rcpp::traits::input_parameter< bool >::type send_more(send_moreSEXP);
    send_socket(socket_, data_, dont_wait, send_more);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_clustermq_init_context", (DL_FUNC) &_clustermq_init_context, 1},
    {"_clustermq_init_socket", (DL_FUNC) &_clustermq_init_socket, 2},
    {"_clustermq_init_message", (DL_FUNC) &_clustermq_init_message, 1},
    {"_clustermq_bind_socket", (DL_FUNC) &_clustermq_bind_socket, 2},
    {"_clustermq_connect_socket", (DL_FUNC) &_clustermq_connect_socket, 2},
    {"_clustermq_disconnect_socket", (DL_FUNC) &_clustermq_disconnect_socket, 2},
    {"_clustermq_poll_socket", (DL_FUNC) &_clustermq_poll_socket, 2},
    {"_clustermq_receive_socket", (DL_FUNC) &_clustermq_receive_socket, 3},
    {"_clustermq_send_socket", (DL_FUNC) &_clustermq_send_socket, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_clustermq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
