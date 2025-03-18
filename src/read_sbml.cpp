#include <Rcpp.h>
#include <iostream>
#include <string>

// simulated function to extract information from an SBML model
// in actual implementation, this would call libSBML
// [[Rcpp::export]]
Rcpp::List read_sbml(std::string file_path) {
  int num_species = 10;
  int num_reactions = 5;
  int num_parameters = 8;

  return Rcpp::List::create(
    Rcpp::Named("species") = num_species,
    Rcpp::Named("reactions") = num_reactions,
    Rcpp::Named("parameters") = num_parameters
  );
};
