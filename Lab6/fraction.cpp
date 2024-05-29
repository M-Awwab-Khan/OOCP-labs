#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}

    void simplify() {
        int gcd = 1;
        for (int i = 1; i <= numerator && i <= denominator; ++i) {
            if (numerator % i == 0 && denominator % i == 0) {
                gcd = i;
            }
        }
        numerator /= gcd;
        denominator /= gcd;
    }

    int getNumerator() {
        return numerator;
    }
    int getDenominator() {
        return denominator;
    }
};

int main() {
    Fraction frac(6, 9);
    frac.simplify();
    std::cout << "Simplified Fraction: " << frac.getNumerator() << "/" << frac.getDenominator() << std::endl;

    return 0;
}