#ifndef MATH_S_FRACTION_HPP
#define MATH_S_FRACTION_HPP

/* namespace math_s::fraction {

    enum MakeCommonMODE {
        SIMPLE,
        REDUCED
    };

} */


/* namespace math_s::fraction {

    class ReductionModeGroup : public ModeGroup {
    protected:


    };

} */

/* namespace math_s::fraction {

    enum class ReductionMode {
        BASIC,
        REDUCED
    };

}

namespace math_s {

    class Fraction {
    protected:
        int numerator = 0; // 分子 ( = above )
        int denominator = 1; // 分母 ( = below )
        bool legal = true; // 除了分母为 0 时, 总是为 true
    public:
        Fraction();

        Fraction(int num, int den);

        [[nodiscard]] int getNumerator() const;

        [[nodiscard]] int getDenominator() const;

        void setNumerator(int num);

        void setDenominator(int den);

        void reduce(); // 约分

        // void makeCommon(Fraction frac, fraction::MakeCommonMODE mode = fraction::SIMPLE);

        void makeCommonWith(Fraction frac, fraction::ReductionMode mode = fraction::ReductionMode::BASIC);
    };

}

namespace math_s::fraction {

    void makeCommon(Fraction &frac1, Fraction &frac2, ReductionMode mode = ReductionMode::BASIC);

} */

#endif //MATH_S_FRACTION_HPP
