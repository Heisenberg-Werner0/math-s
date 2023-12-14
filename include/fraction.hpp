#ifndef MATH_S_FRACTION_HPP
#define MATH_S_FRACTION_HPP

namespace math_s {

    class Fraction {
    protected:
        int numerator = 0; // 分子 ( = above )
        int denominator = 1; // 分母 ( = below )

    public:
        Fraction();

        Fraction(int num, int deno);

        int getNumerator();

        int getDenominator();

        void reduction(); // 约分
    };

}

#endif //MATH_S_FRACTION_HPP
