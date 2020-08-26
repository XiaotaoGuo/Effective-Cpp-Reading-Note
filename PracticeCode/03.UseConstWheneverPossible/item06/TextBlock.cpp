#include <string>

class TextBlock {
public:
    TextBlock(const std::string& text_): text(text_) {}

    // const 版本
    const char& operator[] (std::size_t position) const {
        // 边界检查
        if (position >= text.length()) {
            return text.back();
        }

        // 日志数据访问、检验数据完整性等等...

        return text[position];
    }

    // non-const 版本，只调用了 const 版本方法
    char& operator[] (std::size_t position) {
        return const_cast<char&>(                           // 将 op[] 返回值的 const 转移
            static_cast<const TextBlock&>(*this)[position]  // 为*this 加上 const 调用 const op[]
        );
    }
private:
    std::string text;
};