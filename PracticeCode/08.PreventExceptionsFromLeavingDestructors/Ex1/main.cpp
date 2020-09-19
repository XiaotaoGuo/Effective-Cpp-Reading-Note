#include <vector>
#include <iostream>

class Widge {
public:
    Widge(int a): a_(a) {}

    ~Widge() {
        std::cout << "Destructor called" << std::endl;

        if (a_ == 1) {
            throw 1;
        } else if (a_ == 2) {
            throw 1.0;
        } else {
            std::cout << "Safely Destructed" << std::endl;
        }
    }

private:
    int a_;
};

int main() {

    try{

        {
            Widge w1(2);     // 修改不同初值观察不同行为

            {
                Widge w2(1);
            }
        }
    }
    catch(...) {
        std::cout << "Error catch." << std::endl;
    }

    return 0;
}

