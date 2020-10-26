#include <string>

class Base {
public:
    Base(const std::string& name) : nameValue(name) {}

private:
    Base& operator=(const Base& rhs) { nameValue = rhs.nameValue; }
    std::string nameValue;
};

class Derived : public Base {
public:
    Derived(const std::string& name, int value)
        : Base(name), objectValue(value) {}

private:
    int objectValue;
};

int main() {
    Derived a("a", 1);
    Derived b("b", 2);

    b = a;

    return 0;
}