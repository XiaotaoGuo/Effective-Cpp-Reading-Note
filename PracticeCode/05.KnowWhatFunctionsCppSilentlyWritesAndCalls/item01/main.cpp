#include <string>

template<class T>
class NamedObject {
public:
    NamedObject(std::string& name, const T& value): nameValue(name), objectValue(value) {}

private:
    std::string& nameValue;
    const T objectValue;
};

int main() {
    std::string newDog("A");
    std::string oldDog("S");

    NamedObject<int> p(newDog, 2);
    NamedObject<int> s(oldDog, 36);

    // function "NamedObject<T>::operator=(const NamedObject<int> &) [with T=int]" (declared implicitly) cannot be referenced -- it is a deleted function
    p = s;
}