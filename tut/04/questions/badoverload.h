// Point.h:
class Point {
  public:
    Point& operator+=(const Point& p);
    Point& operator-=(const Point& p);
    Point& operator*=(const Point& p);

  private:
    int x_;
    int y_;
};

// Point.cpp:
Point& Point::operator*=(const Point& p) {
  this->x_ *= p.x_;
  this->y_ *= p.y_;
  return *this;
}