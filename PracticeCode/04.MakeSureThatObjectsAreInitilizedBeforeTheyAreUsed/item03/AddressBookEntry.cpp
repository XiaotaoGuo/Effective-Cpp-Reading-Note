#include <iostream>
#include <list>
#include <string>
#include <vector>

class PhoneNumber {
    //...
private:
    int phone_number = 12345678;
};

// 用于测试的类
class Person {
public:
    Person() { std::cout << "Person constructed! " << std::endl; }

    Person(std::string name) {
        std::cout << "Person constructed with a name! " << std::endl;
        theName = name;
    }

private:
    std::string theName;
};

class AddressBookEntry {
public:
    AddressBookEntry(const std::string& name, const std::string& address,
                     const std::list<PhoneNumber>& phones);

    AddressBookEntry()
        : theName(),
          theAddress(),
          thePhones(),
          numTimesConsulted(0),
          thePerson() {
        std::cout << "Default constructor called " << std::endl;
    }

private:
    std::string theName;
    std::string theAddress;
    std::list<PhoneNumber> thePhones;
    int numTimesConsulted = 12312;
    Person thePerson;
};

AddressBookEntry::AddressBookEntry(const std::string& name,
                                   const std::string& address,
                                   const std::list<PhoneNumber>& phones)
    : theName(name),
      theAddress(address),
      thePhones(phones),
      numTimesConsulted(0),
      thePerson(name) {
    // 下面都是赋值操作，而非初始化！
    std::cout << "Entering constructor" << std::endl;
    std::cout << "Exiting constructor" << std::endl;
}

int main() {
    std::string name = "abc";
    std::string address = "def";
    std::list<PhoneNumber> phones;

    /**
     * output:
     * Person constructed with a name!
     * Entering constructor
     * Exiting constructor
     */
    AddressBookEntry abe(name, address, phones);

    /**
     * output:
     * Person constructed!
     * Default constructor called
     */
    AddressBookEntry abe_2;
    return 0;
}