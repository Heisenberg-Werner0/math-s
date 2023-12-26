#include "number/fraction.hpp"
#include <cmath>
#include <numeric>

/* namespace math_s {

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

    int Fraction::getNumerator() const {
        return numerator;
    }

    int Fraction::getDenominator() const {
        return denominator;
    }

    void Fraction::setNumerator(int num) {
        this->numerator = num;
    }

    void Fraction::setDenominator(int den) {
        this->denominator = den;
        legal = true;
        if (denominator == 0) {
            legal = false;
        }
    }

    void Fraction::reduce() {
        legal = true;

        if (numerator == 0 && denominator != 0) {
            denominator = 1;
            return;
        } // 当 numerator 为 0 且分数有意义时, 直接将 denominator 置 1

        if (denominator == 0) {
            legal = false;
            return;
        }

        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }

        int i;

        if (std::abs(numerator) > std::abs(denominator)) {
            i = denominator;
        } else {
            i = numerator;
        }

        i = std::abs(i);



        int gcdValue = std::gcd(std::abs(numerator), std::abs(denominator));
        numerator = numerator / gcdValue;
        denominator = denominator / gcdValue;
    }


    void Fraction::makeCommonWith(Fraction frac, fraction::ReductionMode mode) {
        switch (mode) {
            case fraction::ReductionMode::BASIC: {
                numerator = numerator * frac.denominator;
                denominator = denominator * frac.denominator;
            }

            case fraction::ReductionMode::REDUCED: {
                this->reduce();
                frac.reduce();
                numerator = numerator * frac.denominator;
                denominator = denominator * frac.denominator;
            }
        }
    } // 与另一数通分，不改变参数的值

}

namespace math_s::fraction {

    void makeCommon(Fraction &frac1, Fraction &frac2, ReductionMode mode) { // 两数之间的通分
        switch (mode) {
            case ReductionMode::BASIC: {
                frac1.makeCommonWith(frac2);
                frac2.makeCommonWith(frac1);
            }

            case ReductionMode::REDUCED: {
                frac1.makeCommonWith(frac2, ReductionMode::REDUCED);
                frac2.makeCommonWith(frac1, ReductionMode::REDUCED);
            }
        }


    }

} */
