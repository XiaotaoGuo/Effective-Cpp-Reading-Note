#include <iostream>
#include <string>

class Person {
public:
    Person() { std::cout << "Person constructed.\n"; }
    virtual ~Person() { std::cout << "Person destroyed.\n"; }

    Person(const Person& other) {
        std::cout << "Person constructed by copy.\n";
        name = other.name;
        address = other.address;
    }

private:
    std::string name;
    std::string address;
};

class Student : public Person {
public:
    Student() { std::cout << "Student constructed.\n"; }
    ~Student() { std::cout << "Student destroyed.\n"; }

    Student(const Student& other) : Person(other) {
        std::cout << "Student constructed by copy.\n";
        schoolName = other.schoolName;
        schoolAdress = other.schoolAdress;
    }

private:
    std::string schoolName;
    std::string schoolAdress;
};

// test function (pass by value)
bool validateStudent(Student s) { return false; }

int main() {
    Student plato;
    bool platoIsOK = validateStudent(plato);

    return 0;
}