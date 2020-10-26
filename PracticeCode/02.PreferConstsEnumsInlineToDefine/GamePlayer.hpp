class GamePlayer {
private:
    static const int NumTurns = 5;  // 常量声明式
    int scores[NumTurns];           // 使用常量
    int Data = 5;  // c++11 以后支持 non-static 变量在声明期获得初值

    // double 变量声明，此处不可以获得初值，否则会报以下错：
    // error: ‘constexpr’ needed for in-class initialization of \
    // static data member ‘const double GamePlayer::Factor’ of non-integral type
    // [-fpermissive]
    static const double Factor;

    enum { Length = 5 };  // 将 Length 作为 5 的记号名称
    int AnArray[Length];

public:
    void printNumTurnsAddr();  // 打印 NumTurns 地址
};