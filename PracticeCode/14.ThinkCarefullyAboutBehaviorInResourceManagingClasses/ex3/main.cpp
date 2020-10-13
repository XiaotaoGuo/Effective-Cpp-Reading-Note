#include <iostream>
#include <memory>
#include <mutex>

void lock(std::mutex* m) {
    std::cout << "mutex locked!" << std::endl;
    m->lock();
}

void unlock(std::mutex* m) {
    std::cout << "mutex unlocked!" << std::endl;
    m->unlock();
}

class Lock {
public:
    explicit Lock(std::mutex* pm) : p_mutex(pm, unlock) { lock(pm); }

private:
    std::shared_ptr<std::mutex> p_mutex;
};

int main() {
    std::mutex m;

    Lock l1(&m);
    Lock l2(l1);

    return 0;
}