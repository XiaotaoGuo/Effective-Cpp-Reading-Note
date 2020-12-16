#include <iostream>
#include <string>

class Window {
public:
    std::string name() const { return "Window"; }
    virtual void display() const { std::cout << "Called by Window object.\n"; }
};

class WindowWithScrolledBar : public Window {
    virtual void display() const {
        std::cout << "Called by WindowWithScrolledBar object.\n";
    }
};

// test function (pass by reference to const)
void printNameAndDisplay(Window w) {
    std::cout << w.name() << std::endl;
    w.display();
}

void printNameAndDisplay1(const Window& w) {
    std::cout << w.name() << std::endl;
    w.display();
}

int main() {
    WindowWithScrolledBar w;
    printNameAndDisplay(w);

    printNameAndDisplay1(w);

    return 0;
}