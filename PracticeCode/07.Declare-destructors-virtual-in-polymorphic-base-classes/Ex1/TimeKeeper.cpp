#include <iostream>

class TimeKeeper {
public:
    TimeKeeper() {}
    ~TimeKeeper() { std::cout << "Destory TimeKeeper" << std::endl; }
    // ...
};

class AtomicClock : public TimeKeeper {
    //...
    ~AtomicClock() { std::cout << "Destory AtomicClock" << std::endl; }
};

class WaterClock : public TimeKeeper {
    //...
    ~WaterClock() { std::cout << "Destroy WaterClock" << std::endl; }
};

class WristWatch : public TimeKeeper {
    //...
    ~WristWatch() { std::cout << "Destroy WristWatch" << std::endl; }
};

// return a TimeKeeper pointer pointing to derived class
TimeKeeper* getTimeKeeper() { return new WaterClock(); }

int main() {
    TimeKeeper* ptk = getTimeKeeper();
    delete ptk;

    return 0;
}