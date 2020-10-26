#include <iostream>
#include <string>

class TextBlock {
public:
    TextBlock(const std::string& text) : m_text(text) {}

    // const version of operator []
    const char& operator[](std::size_t position) const {
        return m_text[position];
    }

    // non-const version of operator []
    char& operator[](std::size_t position) { return m_text[position]; }

private:
    std::string m_text;
};

// 参数传递时经常使用 pass by reference to const
void print(const TextBlock& block) {
    std::cout << block[0]
              << std::endl;  // 如果没有 const 重载的成员函数，这里会编译失败！
}

int main() {
    TextBlock tb("Hello");
    std::cout << tb[0] << std::endl;  // tb[0] changeable
    tb[0] = 'h';                      // works

    const TextBlock ctb("Hello");
    std::cout << ctb[0] << std::endl;  // ctb[0] non-changeable
    // ctb[0] = 'h';                       // fails!

    print(tb);
}