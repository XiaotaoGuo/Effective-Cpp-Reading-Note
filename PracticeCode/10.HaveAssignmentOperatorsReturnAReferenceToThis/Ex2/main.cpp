#include <iostream>

class A {
public:
    A() : m_var(0) {}
    A(int var) : m_var(var) {}

    A& operator=(const A& rhs) {
        m_var = rhs.getVar();
        return *this;
    }

    A& operator+=(const A& rhs) {
        m_var += rhs.getVar();
        return *this;
    }

    const int getVar() const { return m_var; }

private:
    int m_var;
};

int main() {
    A a1, a2, a3;
    a1 = a2 = a3 = A(15);
    std::cout << "a1.var = " << a1.getVar() << std::endl;  // 15
    std::cout << "a2.var = " << a2.getVar() << std::endl;  // 15
    std::cout << "a3.var = " << a3.getVar() << std::endl;  // 15

    a1 = a2 += a3;
    std::cout << "a1.var = " << a1.getVar() << std::endl;  // 30
    std::cout << "a2.var = " << a2.getVar() << std::endl;  // 30
    std::cout << "a3.var = " << a3.getVar() << std::endl;  // 15

    return 0;
}