#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
int add_numbers(int a, int b) {
  return a + b;
}
