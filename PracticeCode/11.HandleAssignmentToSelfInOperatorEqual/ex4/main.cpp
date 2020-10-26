#include <iostream>

class BitMap {
public:
    BitMap() { std::cout << "BitMap Created." << std::endl; }

    BitMap(int a_) : a(a_) { std::cout << "BitMap Created." << std::endl; }

    BitMap(const BitMap& rhs) {
        a = rhs.a;
        std::cout << "BitMap Created." << std::endl;
        throw std::runtime_error("1");
    }

    ~BitMap() {
        a = 0;
        std::cout << "BitMap Deleted." << std::endl;
    }

    void test() { std::cout << "a = " << a << std::endl; }

private:
    int a;
};

class Widget {
public:
    Widget() { pb = new BitMap(); }

    Widget(int a) { pb = new BitMap(a); }

    ~Widget() { delete pb; }

    Widget& operator=(const Widget& rhs) {
        BitMap* pOrig = pb;  // 保存当前 pb 的副本
        pb = new BitMap(*rhs.pb);
        delete pOrig;  // 保证在 new 操作成功后再删除原有 pb
        return *this;
    }

    void test() { pb->test(); }

private:
    BitMap* pb;
};

int main() {
    Widget w(2);
    Widget w1(3);
    w.test();
    w1.test();

    try {
        w = w1;
    } catch (...) {
        std::cout << "exception caught." << std::endl;
    }
    w.test();
    return 0;
}
