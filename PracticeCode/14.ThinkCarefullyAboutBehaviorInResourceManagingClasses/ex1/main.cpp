#include <chrono>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>

std::mutex m;

class Lock {
public:
    explicit Lock(std::mutex* pm) : p_mutex(pm) { p_mutex->lock(); }

    ~Lock() { p_mutex->unlock(); }

private:
    std::mutex* p_mutex;
};

void printMessage(const std::string& msg) {
    Lock lock(&m);
    for (const char& c : msg) {
        std::cout << c << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
    std::cout << "\n";
}

int main() {
    std::string msg = "Hello";
    std::thread t1(printMessage, std::ref(msg));
    printMessage(msg);
    t1.join();

    return 0;
}