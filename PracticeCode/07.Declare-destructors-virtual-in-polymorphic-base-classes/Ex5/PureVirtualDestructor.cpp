#include <iostream>

// AWOV short for Abstract w/o Virtuals
class AWOV {
public:
    virtual ~AWOV() = 0;
};

AWOV::~AWOV() { std::cout << "Destory AWOV" << std::endl; }

class Derived : public AWOV {
public:
    ~Derived() { std::cout << "Destory Derived" << std::endl; }
};

int main() {
    Derived* d = new Derived();
    delete d;

    return 0;
}