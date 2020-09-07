#include <iostream>

class A {
public:
    A() { std::cout << "A constuctor!" << std::endl; }
};

class B {
public:
    B() { std::cout << "B constructor!" << std::endl; }
};

class C{
public:
    C() : a(), b() {}
    C(bool flag): b(), a() {}

private:
    A a;
    B b;
};

int main() {
    C c1; // first construct A, then construct B
    C c2(true); // different intialization list, but same constructint order
}