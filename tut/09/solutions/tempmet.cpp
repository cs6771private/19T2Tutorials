#include <iostream>

template<int n> struct Factorial {
  static const long val = Factorial<n-1>::val * n;
};

template<> struct Factorial<0> {
  static const long val = 1; // must be a compile-time constant
};

int main() {
  std::cout << Factorial<6>::val << std::endl;
}