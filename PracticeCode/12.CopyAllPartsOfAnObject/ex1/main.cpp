#include <iostream>
#include <string>

class Customer {
public:
    Customer(const std::string& name_, const std::string& date_)
        : name(name_), date(date_) {}
    Customer(const Customer& rhs);
    Customer& operator=(const Customer& rhs);

    void print() {
        std::cout << "name: " << name << ", date: " << date << std::endl;
    }

private:
    std::string name;
    std::string date;
};

Customer::Customer(const Customer& rhs) : name(rhs.name) {
    std::cout << "Customer copy constructor called." << std::endl;
}

Customer& Customer::operator=(const Customer& rhs) {
    std::cout << "Customer copy assignment called." << std::endl;
    name = rhs.name;
    return *this;
}

int main() {
    Customer c1("A", "2020-10-03");
    Customer c2("B", "2020-10-01");
    c2 = c1;  // no complete copied!
    c1.print();
    c2.print();

    return 0;
}
