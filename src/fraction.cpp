#include "../include/fraction.hpp"
#include <cmath>

namespace math_s {

    Fraction::Fraction() {
        numerator = 0;
        denominator = 1;
    }

    Fraction::Fraction(int num, int den) {
        numerator = num;
        denominator = den;
        legal = true;
        if (denominator == 0) {
            legal = false;
        }
    }

    int Fraction::getNumerator() {
        return numerator;
    }

    int Fraction::getDenominator() {
        return denominator;
    }

    void Fraction::setNumerator(int num) {
        numerator = num;
    }

    void Fraction::setDenominator(int den) {
        denominator = den;
        legal = true;
        if (denominator == 0) {
            legal = false;
        }
    }

    void Fraction::reduction() {
        legal = true;

        if (numerator == 0 && denominator != 0) {
            denominator = 1;
            return;
        } // 当 numerator 为 0 且分数有意义时, 直接将 denominator 置 1

        if (denominator == 0) {
            legal = false;
            return;
        }

        if (numerator < 0 && denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        } else if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }

        int i;

        if (abs(numerator) > abs(denominator)) {
            i = denominator;
        } else {
            i = numerator;
        }

        i = abs(i);

        while (i > 1) {
            if (numerator % i == 0 && denominator % i == 0) {
                numerator /= i;
                denominator /= i;
            }
            i--;
        }
    }

}