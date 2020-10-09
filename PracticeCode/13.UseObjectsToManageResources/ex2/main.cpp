#include <iostream>
#include <tr1/memory>

class Investment {
public:
    Investment() {
        std::cout << "Investment Constructed." << std::endl;
    }
    ~Investment() {
        std::cout << "Investment Destructed." << std::endl;
    }
};

Investment* createInvestment() {
    return new Investment();
}

int main () {

    {
        std::tr1::shared_ptr<Investment> pInv(createInvestment());
        {
            std::tr1::shared_ptr<Investment> pInv2 = pInv;
            std::cout << "pInv's address " << (pInv.get()) << std::endl;
            std::cout << "pInv2's address: " << (pInv2.get()) << std::endl;
        }
        std::cout << "pInv's address " << (pInv.get()) << std::endl;
    }

    return 0;
}
