#include <iostream>
#include <string>

class Age {
public:
    Age() { std::cout << "Age constructed.\n"; }
    Age(const Age& other) : age(other.age) {
        std::cout << "Age constructed by copied.\n";
    }

    ~Age() { std::cout << "Age destroyed.\n"; }

private:
    int age = 0;
};

class Person {
public:
    Person() { std::cout << "Person constructed.\n"; }
    virtual ~Person() { std::cout << "Person destroyed.\n"; }

    Person(const Person& other) : age(other.age) {
        std::cout << "Person constructed by copy.\n";
        name = other.name;
        address = other.address;
    }

private:
    Age age;
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