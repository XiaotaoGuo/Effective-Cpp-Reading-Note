#include <iostream>
#include <memory>

class Widget {
public:
    Widget() { std::cout << "Construct Widget\n"; }
    ~Widget() { std::cout << "Destructed Widget\n"; }
};

int priority() {
    std::cout << "priority: 0\n";
    throw std::runtime_error("Exception happened.");
    return 0;
}

void processWidget(std::shared_ptr<Widget> pw, int priority) { return; }

int main() {
    // compile fail!!
    // no coversion from to Widget* to std::shared_ptr<Widget> directly
    // processWidget(new Widget, priority());

    try {
        // step:
        // 1.call priority
        // 2.call new Widget
        // 3.pass newed Widget to std::shared_ptr
        // if 1 happens between 2 & 3 and throw an exception, that might cause a
        // memory leak!
        processWidget(std::shared_ptr<Widget>(new Widget), priority());
    } catch (...) {
        std::cout << "Exception caught.\n";
    }

    // method 3: recommended way
    std::shared_ptr<Widget> pw(new Widget);
    processWidget(pw, priority());

    return 0;
}