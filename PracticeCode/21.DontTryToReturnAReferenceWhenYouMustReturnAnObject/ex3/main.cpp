#include <iostream>
#include <string>

/**
 * 有理数类
 */
class Rational {
public:
    Rational(int nummerator = 0, int denominator = 1)
        : n(nummerator), d(denominator) {
        std::cout << "Rational constructed.\n";
    }

    ~Rational() { std::cout << "Rational destroyed.\n"; }

    void print() { std::cout << n << "/" << d << std::endl; }

private:
    int n, d;
    friend const Rational& operator*(const Rational& lhs, const Rational& rhs) {
        Rational* result = new Rational(lhs.n * rhs.n, lhs.d * rhs.d);
        return *result;
    }
};

int main() {
    Rational a(1, 2);
    Rational b(3, 4);
    Rational c;
    c = a * b;

    return 0;
}