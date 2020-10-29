#include <iostream>
#include <string>

int main() {
    std::string* str = new std::string();
    delete[] str;

    return 0;
}