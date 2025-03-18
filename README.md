
## `demoRcppPkg` 

### demoRcppPkg: A Minimal Rcpp-Based Package for SBML Parsing  

This package provides a simple interface to demonstrate R and C++ integration using **Rcpp**. It includes:  
- A basic **addition** function.  
- A **read_sbml** function that simulates extracting information from an SBML model (e.g., number of species, reactions, and parameters).  

### Installation  

You can install the package locally using:  
```r
devtools::install_github("Vai-Man/r2sbml-demo")
```
Or, if installing from a local directory:  
```r
devtools::install("path/to/demoRcppPkg")
```

### Usage  

```r
library(demoRcppPkg)

# Using the addition function
add_numbers(2, 3)  # Returns 5

# Using the SBML parser function (simulated)
read_sbml("example.xml")
```
