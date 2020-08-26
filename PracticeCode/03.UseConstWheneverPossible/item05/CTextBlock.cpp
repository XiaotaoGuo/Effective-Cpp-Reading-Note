#include <string.h>
#include <string>
#include <iostream>
#include <cstring>

// a bitwise constness version of CTextBlock
class CTextBlock_v1 {
public:
    CTextBlock_v1(const char* text) { strcpy(pText, text); }

    // 符合 bitwise conestness 原则，但实际上 pText 指向的字符串是可以被改变的！
    char& operator[](std::size_t position) const { return pText[position]; }

private:
    char* pText;
};

// a logical constness version of CTextBlock which will not compile
// class CTextBlock_v2 {
// public:
//     CTextBlock_v2(const char* text) { strcpy(pText, text); }

//     // 编译失败! 因为对成员变量进行操作
//     std::size_t length() const {
//         if (!lengthIsValid) {
//             textLength = std::strlen(pText);
//             lengthIsValid = true;
//         }

//         return textLength;
//     }

// private:
//     char* pText;
//     std::size_t textLength;         // 最近一次计算的文本区块长度
//     bool lengthIsValid;             // 目前长度是否有效
// };

class CTextBlock_v3 {
public:
    CTextBlock_v3(const char* text) { strcpy(pText, text); }

    // 编译失败! 因为对成员变量进行操作
    std::size_t length() const {
        if (!lengthIsValid) {
            textLength = std::strlen(pText);
            lengthIsValid = true;
        }

        return textLength;
    }

private:
    char* pText;
    mutable std::size_t textLength;         // 最近一次计算的文本区块长度
    mutable bool lengthIsValid;             // 目前长度是否有效
};

int main () {

    const CTextBlock_v1 block("Hello");

    std::cout << block[0] << std::endl;

    block[0] = 'h';             // works! which it shouldn't

    std::cout << block[0] << std::endl;

    return 0;
}