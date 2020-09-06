#include <vector>
#include <string>
#include <list>
#include <iostream>

class PhoneNumber {
    //...
private:
    int phone_number = 12345678;
};

// 用于测试的类
class Person {
public:
    Person() {
        std::cout << "Person constructed! " << std::endl;
    }

    Person(const std::string& name) {
        std::cout << "Person constructed with a name! " << std::endl;
        theName = name;
    }

private:
    std::string theName;
};

class AddressBookEntry {
public:
    AddressBookEntry(const std::string& name, const std::string& address, const std::list<PhoneNumber>& phones);

private:
    std::string theName;
    std::string theAddress;
    std::list<PhoneNumber> thePhones;
    int numTimesConsulted = 12312;
    Person thePerson;
};

AddressBookEntry::AddressBookEntry(const std::string& name, const std::string& address, const std::list<PhoneNumber>& phones) {

    // 下面都是赋值操作，而非初始化！
    std::cout << "Entering constructor" << std::endl;
    theName = name;
    theAddress = address;
    thePhones = phones;
    numTimesConsulted = 0;
    thePerson = Person(name);
    std::cout << "Exiting constructor" << std::endl;
}

int main() {

    std::string name = "abc";
    std::string address = "def";
    std::list<PhoneNumber> phones;

    /**
     * output:
     * Person constructor ---> person default constructor is called
     * Entering constructor ---> entering AddressBookEntry constructor
     * Person constructed with a name! ---> second constructor for Person called 
     * Exit constructor
     */
    AddressBookEntry abe(name, address, phones);
    return 0;
}