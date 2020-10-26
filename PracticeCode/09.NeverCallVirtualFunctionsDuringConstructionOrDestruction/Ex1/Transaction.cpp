#include <iostream>
#include <string>

class Transaction {
public:
    Transaction();
    virtual void logTransaction() const = 0;
};

class BuyTransaction : public Transaction {
public:
    virtual void logTransaction() const;
};

class SellTransaction : public Transaction {
public:
    virtual void logTransaction() const;
};

Transaction::Transaction() { logTransaction(); }

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