
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

add_numbers(2, 3)

read_sbml("example.xml")
```

You can add a **"Future Development"** section in your README to highlight the transition from your current implementation (`demoRcppPkg`) to the full-fledged `r2sbml` package. Here's a short, clear statement:  

---

### Future Development  

The current implementation provides basic SBML parsing, extracting key details like species, reactions, and parameters. The next step is to expand this into `r2sbml`, a complete interface for working with SBML models in R. Planned improvements include integrating **libSBML**, enabling model conversion for ODE solvers (`deSolve`, `rxode2`), and supporting model modifications within R. Testing with the **SBML Test Suite** will ensure reliability.  

This transition will create a robust and easy-to-use package for handling SBML models in R.