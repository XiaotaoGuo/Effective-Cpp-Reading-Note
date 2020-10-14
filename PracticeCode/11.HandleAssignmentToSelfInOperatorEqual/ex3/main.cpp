#include <iostream>

class BitMap {
public:
    BitMap () {
        std::cout << "BitMap Created." << std::endl;
    }

    BitMap(int a_):a(a_) {
        std::cout << "BitMap Created." << std::endl;
    }

    BitMap(const BitMap& rhs) {
        a = rhs.a;
        std::cout << "BitMap Created." << std::endl;
        throw std::runtime_error("1");
    }

    ~BitMap() {
        a = 0;
        std::cout << "BitMap Deleted." << std::endl;
    }

    void test () {
        std::cout << "a = " << a << std::endl;
    }

private:
    int a;
};

class Widget {
public:
    Widget() {
        pb = new BitMap();
    }

    Widget(int a) {
        pb = new BitMap(a);
    }

    ~Widget() {
        delete pb;
    }

    Widget& operator=(const Widget& rhs) {
        if (this == &rhs) return *this; // identity test
        delete pb;
        pb = new BitMap(*rhs.pb);
        return *this;
    }

    void test() {
        pb->test();
    }

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
    } catch(...) {
        std::cout << "exception caught." << std::endl;
    }
    w.test();
    return 0;
}