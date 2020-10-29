#include <iostream>
#include <string>

class myString {
public:
    myString() {
        std::cout << "Default Constructor called.\n";
    }



    ~myString() {
        std::cout << "Destructor called.\n";
    }
private:
    int m_str;
};

int main() {
    std::string* stringArray = new std::string[100];
    delete stringArray;

    return 0;
}