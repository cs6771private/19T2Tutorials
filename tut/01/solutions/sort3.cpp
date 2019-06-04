#include <iostream>

void sort3(int& a, int& b, int& c);

int main() {
  int a, b, c;
  std::cout << "Enter 3 integers: ";
  std::cin >> a >> b >> c;
  sort3(a, b, c);
  std::cout << a << ", " << b << ", " << c << "\n";
  return 0;
}

void sort3(int& a, int& b, int& c) {
  if (a > c) {
    int t = a;
    a = c;
    c = t;
  }
  if (b > c) {
    int t = b;
    b = c;
    c = t;
  }
  if (a > b) {
    int t = a;
    a = b;
    b = t;
  }
}