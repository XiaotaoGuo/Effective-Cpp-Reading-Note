#include <iostream>
#include <string>

/**
 * 有理数类
 */
class Rational {
public:
    Rational(int nummerator = 0, int denominator = 1)
        : n(nummerator), d(denominator) {}

    void print() { std::cout << n << "/" << d << std::endl; }

private:
    int n, d;
    friend const Rational& operator*(const Rational& lhs, const Rational& rhs) {
        static Rational result;
        result.n = lhs.n * rhs.n;
        result.d = lhs.d * rhs.d;
        return result;
    }

    friend bool operator==(const Rational& lhs, const Rational& rhs) {
        return (lhs.n == rhs.n) && (lhs.d == rhs.d);
    }
};

int main() {
    Rational a(2, 1);
    Rational b(3, 1);
    Rational c(1, 1);
    Rational d(2, 1);

    if ((a * b) == (c * d)) {
        std::cout << "2 * 3 = 1 * 2\n";
    } else {
        std::cout << "2 * 3 != 1 * 2\n";
    }

    return 0;
}