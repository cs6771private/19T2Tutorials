#include <iostream>

struct X {
  ~X() { std::cout << "~X()\n"; }
};

struct Y {
  ~Y() { std::cout << "~Y()\n"; }
};

class A {
  X x;
 public:
  ~A() { std::cout << "~A()\n"; }
};

class B : public A {
  Y y;
 public:
  ~B() { std::cout << "~B()\n"; }
};

int main() {
  B b;
}
