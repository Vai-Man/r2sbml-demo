#' Add Two Numbers Using C++
#'
#' This function takes two integers and returns their sum using C++.
#'
#' @param a An integer.
#' @param b An integer.
#' @return The sum of `a` and `b`.
#' @export
add_numbers <- function(a, b) {
  .Call("_demoRcppPkg_add_numbers", a, b)
}
