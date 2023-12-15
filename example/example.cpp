#include <iostream>
#include "../include/fraction.hpp"

int main() {
    math_s::Fraction frac(5, -10);
    frac.reduction();
    std::cout << frac.getNumerator() << ", " << frac.getDenominator();
}