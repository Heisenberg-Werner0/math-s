#ifndef MATH_S_FRACTION_HPP
#define MATH_S_FRACTION_HPP

namespace math_s {

    class Fraction {
    protected:
        int numerator = 0; // 分子 ( = above )
        int denominator = 1; // 分母 ( = below )
        bool legal = true; // 除了分母为 0 时, 总是为 true
    public:
        Fraction();

        Fraction(int num, int den);

        int getNumerator();

        int getDenominator();

        void setNumerator(int num);

        void setDenominator(int den);

        void reduction(); // 约分
    };

}

#endif //MATH_S_FRACTION_HPP
