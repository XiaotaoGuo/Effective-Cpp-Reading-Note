#include <iostream>

class Point {
public:
    Point(int xCoord, int yCoord): x(xCoord), y(yCoord) {}
    ~Point() {};
private:
    int x, y;
};

class PointWithVitural {
public:
    PointWithVitural(int xCoord, int yCoord): x(xCoord), y(yCoord) {}
    virtual ~PointWithVitural() {};
private:
    int x, y;
};

int main () {
    
    std::cout << "Size of Point: " << sizeof(Point) << std::endl;
    std::cout << "Size of PointWithVirtual: " << sizeof(PointWithVitural) << std::endl;

    return 0;
}