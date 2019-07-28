#include <iostream>

constexpr int factorial (int n) {
  return n > 0 ? n * factorial( n - 1 ) : 1;
}

int main() {
  std::cout << factorial(6) << std::endl;
}