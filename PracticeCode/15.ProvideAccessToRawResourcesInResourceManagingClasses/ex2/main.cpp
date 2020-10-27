#include <stdio.h>

struct FontHandle {};  // 字体资源

// C API to get a font handle
FontHandle getFont() {
    FontHandle fh;
    printf("Got a font handle\n");
    return fh;
}

// Another C API used to release font
void releaseFont(FontHandle fh) {
    printf("Font released.\n");
    return;
}

void changeFontSize(FontHandle f, int newSize) {
    printf("Font size changed to %d.\n", newSize);
}

// RAII class
class Font {
public:
    explicit Font(FontHandle fh) : f(fh) {}  // 获取资源
    ~Font() { releaseFont(f); }              // 释放资源

    // 显式转换函数
    FontHandle get() const { return f; }

    // 隐式转换函数
    operator FontHandle() const { return f; }

private:
    FontHandle f;  // 原始字体资源
};

int main() {
    Font f(getFont());
    int newFontSize = 10;

    // 显式转换
    changeFontSize(f.get(), newFontSize);

    // 隐式转换
    changeFontSize(f, newFontSize);

    // 危险！当 f 被销毁时 f1 会变成野指针，由于我们提供了隐式转换所以编译会通过
    FontHandle f1 = f;

    return 0;
}
