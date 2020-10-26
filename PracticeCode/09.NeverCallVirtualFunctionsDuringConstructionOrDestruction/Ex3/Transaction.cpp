#include <iostream>
#include <string>

class Transaction {
public:
    explicit Transaction(const std::string& logInfo);
    void logTransaction(const std::string& logInfo) const;
};

class BuyTransaction : public Transaction {
public:
    BuyTransaction() : Transaction(createLogString()) {}

private:
    static std::string createLogString();
};

class SellTransaction : public Transaction {
public:
    SellTransaction() : Transaction(createLogString()) {}

private:
    static std::string createLogString();
};

Transaction::Transaction(const std::string& logInfo) {
    std::cout << logInfo << std::endl;
}

std::string BuyTransaction::createLogString() {
    return "Logged a buy transaction";
}

std::string SellTransaction::createLogString() {
    return "Logged a sell transaction";
}

int main() {
    BuyTransaction b;
    SellTransaction s;

    return 0;
}