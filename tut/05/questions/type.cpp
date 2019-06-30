// Point.h:
#include <vector>
class Point {
  public:
    Point(int x, int y) : x_(x), y_(y) {}
    

  private:
    int x_;
    int y_;
};

// Point.cpp:
#include <iostream>
#include <vector>
int main() {
  Point p{1,2};
  double length = p;
}