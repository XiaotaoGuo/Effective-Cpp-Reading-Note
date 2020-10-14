#include <chrono>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>

class Lock {
public:
    explicit Lock(std::mutex* pm) : p_mutex(pm) {
        std::cout << "mutex locked!" << std::endl;
        p_mutex->lock();
    }

    ~Lock() {
        std::cout << "mutex unlocked!" << std::endl;
        p_mutex->unlock();
    }

private:
    std::mutex* p_mutex;
};

int main() {
    std::mutex m;

    Lock l1(&m);
    Lock l2(l1);

    return 0;
}