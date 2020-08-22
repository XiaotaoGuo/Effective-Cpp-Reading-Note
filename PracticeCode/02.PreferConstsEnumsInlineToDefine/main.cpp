#include "GamePlayer.hpp"
#include <iostream>

#define CALL_WITH_MAX(a,b) f((a) > (b) ? (a) : (b))

void f(int num);

template<typename T>
inline void callWithMax(const T& a, const T& b) {   // 由于我们不知道 T 是什么，所以采用 pass by reference to const
    f(a > b ? a : b);
}



int main() {

    // 使用 const、enum 代替 define 的例子
    GamePlayer game_player;
    game_player.printNumTurnsAddr();

    // 使用 template inline 函数代替宏的例子
    std::cout << "Using Macros: " << std::endl;
    int a = 5, b = 0;
    std::cout << "a = " << a << std::endl;
    CALL_WITH_MAX(++a, b);  // a 比 b 大，累加两次
    std::cout << "a = " << a << std::endl;
    CALL_WITH_MAX(++a, b + 10); // a 比 b 小，累加一次
    std::cout << "a = " << a << std::endl;

    std::cout << "Using template inline function: " << std::endl;
    a = 5, b = 0;
    std::cout << "a = " << a << std::endl;
    callWithMax(++a, b);
    std::cout << "a = " << a << std::endl;
    callWithMax(++a, b + 10);
    std::cout << "a = " << a << std::endl;

    return 0;
}

void f(int num) {
    std::cout << "Excuted f()!" << std::endl;
}