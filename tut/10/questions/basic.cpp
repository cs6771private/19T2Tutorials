#include <iostream>

class A1 {
 public:
  A1() {
    std::cout << "A1\n";
  }
};

class A2 {
 public:
  A2() {
    std::cout << "A2\n";
  }
 private:
  A1 a1_;
};

class A3 {
 public:
  A3() {
    std::cout << "A3\n";
  }
 private:
  A1 a1_;
  A2 a2_;
};

int main() {
  A3 a3;
}
