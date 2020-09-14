#include <string>
#include <iostream>

class SpecialString : public std::string {

    ~SpecialString() {
        std::cout << "Destory SpecialString" << std::endl;
    }
};

int main() {
    std::string* ps = new SpecialString();
    delete ps;

    return 0;
}