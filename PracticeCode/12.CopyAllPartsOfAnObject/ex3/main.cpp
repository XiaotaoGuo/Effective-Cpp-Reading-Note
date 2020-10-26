#include <iostream>
#include <string>

class Customer {
public:
    Customer() {}
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

Customer::Customer(const Customer& rhs) : name(rhs.name), date(rhs.date) {
    std::cout << "Customer copy constructor called." << std::endl;
}

Customer& Customer::operator=(const Customer& rhs) {
    std::cout << "Customer copy assignment called." << std::endl;
    name = rhs.name;
    date = rhs.date;
    return *this;
}

class PriorityCustomer : public Customer {
public:
    PriorityCustomer(const std::string& name_, const std::string& date_,
                     int priority_)
        : Customer(name_, date_), priority(priority_) {}
    PriorityCustomer(const PriorityCustomer& rhs)
        : Customer(rhs),  // 调用基类 copy constructor
          priority(rhs.priority) {
        std::cout << "PriorityCustomer copy constructor called" << std::endl;
    }

    PriorityCustomer& operator=(const PriorityCustomer& rhs) {
        std::cout << "PriorityCustomer copy constructor called" << std::endl;
        Customer::operator=(rhs);  // 调用基类 copy assignment
        priority = rhs.priority;
        return *this;
    }

    void printProfile() {
        print();
        std::cout << "Priority: " << priority << std::endl;
    }

private:
    int priority;
};

int main() {
    PriorityCustomer c1("A", "2020-10-03", 1);
    PriorityCustomer c2("B", "2020-10-01", 2);
    c2 = c1;  // complete copied!
    c1.printProfile();
    c2.printProfile();

    return 0;
}
