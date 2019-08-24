#include <iostream>

class Animal {
 public:
  Animal() {
    std::cout << "Animal\n";
  }
};

class Amphibian {
 public:
  Amphibian() {
    std::cout << "Amphibian\n";
  }
 private:
  Animal a1_;
};

class Fish {
 public:
  Fish() {
    std::cout << "Fish\n";
  }
 private:
  Animal a1_;
  Amphibian a2_;
};

int main() {
  Fish a3;
}
