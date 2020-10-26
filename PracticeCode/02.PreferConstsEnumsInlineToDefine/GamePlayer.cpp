#include "GamePlayer.hpp"

#include <iostream>

// NumTurns 的定义式
const int GamePlayer::NumTurns;

// Factor 的定义式，由于是 const 变量，此处要赋值
const double GamePlayer::Factor = 1.35;

// 如果不提供 NumTurns 的定义式时，编译会报错：undefined reference to
// `GamePlayer::NumTurns'
void GamePlayer::printNumTurnsAddr() {
    std::cout << "NumTrunsAddr: " << &NumTurns << std::endl;
}