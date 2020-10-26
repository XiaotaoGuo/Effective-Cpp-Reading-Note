#include <iostream>

class Point {
public:
    int x, y;
    void print() const {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
};

int global_val;

int main() {
    /**
     * 不会进行初始化的例子
     */

    // 局部变量
    int local_val;  // 不会进行初始化，取决于该地址原有的数据
    std::cout << "local_val = " << local_val << std::endl;

    for (int i = 0; i < 5; i++) {
        int x;  // 声明时不会自动初始化为 0，会保留该地址之前的值！
        if (i % 2 == 0) {
            x = i;
        }
        std::cout << "x = " << x << std::endl;  // 0,0,2,2,4
    }

    // 类成员变量
    Point local_p;
    local_p.print();

    for (int i = 0; i < 5; i++) {
        Point
            p;  // 同样，声明一个对象也不会自动初始化内置类型，也不会清空该地址原有值
        if (i % 2 == 0) {
            p.x = i;
            p.y = i;
        }
        p.print();  // (0, 0),(0, 0),(2, 2,),(2, 2),...
    }

    /**
     * 会自动初始化的例子
     */

    // 全局变量
    std::cout << "global_val = " << global_val << std::endl;  // 一定为 0

    // 局部静态变量
    static int static_val;
    std::cout << "static_val = " << static_val << std::endl;

    /**
     * 基本类型初始化方法
     */
    // 内置类型手动初始化
    int x = 0;                              // 手动初始化整型
    const char* text = "A C-style string";  // 手动初始化指针
    double d;

    // std::cout << "input value for d: ";
    // std::cin >> d;                          // 利用读取 input stream
    // 的方式初始化 std::cout << "d = " << d << std::endl;

    return 0;
}