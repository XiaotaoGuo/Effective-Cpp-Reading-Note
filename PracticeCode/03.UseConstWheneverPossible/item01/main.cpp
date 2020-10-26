#include <iostream>
#include <vector>

void runConstPointerExample();

void runConstSTLExample();

void runConstReturnExample();

int main() {
    runConstPointerExample();

    runConstSTLExample();

    runConstReturnExample();
}

void runConstPointerExample() {
    char greeting[] = "Hello";

    char* p_nc_nc = greeting;  // non-const pointer, non-const data
    *p_nc_nc = 'a';            // works
    p_nc_nc++;                 // works

    const char* p_nc_c = greeting;  // non-const pointer, const data
    // *p_nc_c = 'a';  // error: assignment of read-only location ‘* p_nc_c’
    p_nc_c++;  // works

    char* const p_c_nc = greeting;  // const pointer, non-const data
    // p_c_nc++;       // error: increment of read-only variable ‘p_c_nc’
    *p_c_nc = 'a';  // works

    const char* const p_c_c = greeting;  // const pointer, const data
    // p_c_c++;            // error: increment of read-only variable ‘p_c_c
    // *p_c_c = 'a';       // error: assignment of read-only location ‘*(const
    // char*)p_c_c’
}

void runConstSTLExample() {
    std::vector<int> testVec(10, 0);
    const std::vector<int>::iterator iter =
        testVec.begin();  // const pointer, non-const data;
    // iter = testVec.end();     // error: passing ‘const iterator {aka const
    // __gnu_cxx::__normal_iterator<int*, std::vector<int> >}’ as ‘this’
    // argument discards qualifiers [-fpermissive]
    *iter = 10;  // works
    std::vector<int>::const_iterator cIter =
        testVec.begin();  // non-const pointer, const data;
    ++cIter;              // works;
    // *cIter = 10;    // error: assignment of read-only location
    // ‘cIter.__gnu_cxx::__normal_iterator<const int*, std::vector<int>
    // >::operator*()’
}

class Integer {
public:
    int m_value;
    Integer(int value) : m_value(value) {}
    Integer() {}
    operator bool() const { return m_value != 0; }
};

const Integer operator*(const Integer& lhs, const Integer& rhs) {
    int product = lhs.m_value * rhs.m_value;
    return Integer(product);
}

const bool operator==(const Integer& lhs, const Integer& rhs) {
    return lhs.m_value == rhs.m_value;
}

void runConstReturnExample() {
    Integer a(1), b(2), c(4);
    // if (a * b = c) {    // potential typo
    if (a * b == c) {
        std::cout << "a * b = c" << std::endl;
    } else {
        std::cout << "a * b != c" << std::endl;
    }
}