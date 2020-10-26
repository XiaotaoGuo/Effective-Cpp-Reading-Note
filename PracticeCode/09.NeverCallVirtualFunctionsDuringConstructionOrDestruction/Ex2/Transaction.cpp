#include <iostream>
#include <string>

class Transaction {
public:
    Transaction() { init(); }
    // virtual void logTransaction() const = 0;
    virtual void logTransaction() {
        std::cout << "Logged a base transaction" << std::endl;
    }

private:
    void init() { logTransaction(); }
};

class BuyTransaction : public Transaction {
public:
    virtual void logTransaction() const;
};

class SellTransaction : public Transaction {
public:
    virtual void logTransaction() const;
};

void BuyTransaction::logTransaction() const {
    std::cout << "Logged a buy transaction" << std::endl;
}

void SellTransaction::logTransaction() const {
    std::cout << "Logged a sell transaction" << std::endl;
}

int main() {
    BuyTransaction b;

    return 0;
}