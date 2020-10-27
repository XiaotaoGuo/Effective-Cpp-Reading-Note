#include <iostream>
#include <memory>

class Investment {
public:
    Investment() { std::cout << "Investment Constructed." << std::endl; }
    ~Investment() { std::cout << "Investment Destructed." << std::endl; }
};

Investment* createInvestment() { return new Investment(); }

int daysHeld(Investment* pi) { return 0; }  // 返回投资天数

int main() {
    std::shared_ptr<Investment> pInv(createInvestment());

    // error: cannot convert ‘std::shared_ptr<Investment>’ to ‘Investment*’
    // int days = daysHeld(pInv);

    // use get() to get naked pointer
    int days = daysHeld(pInv.get());
    return 0;
}
