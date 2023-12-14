#include "../include/fraction.hpp"

namespace math_s {

    Fraction::Fraction() {
        numerator = 0;
        denominator = 1;
    }

    Fraction::Fraction(int num, int deno) {
        numerator = num;
        denominator = deno;
    }

    int Fraction::getNumerator() {
        return numerator;
    }

    int Fraction::getDenominator() {
        return denominator;
    }

}