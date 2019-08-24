#include <iostream>
#include <string>

class Lemon {
 public:
  explicit Lemon(double r, std::string s) : sourness_{s}, radius_{r} {}
  friend operator<<(ostream& os, const Lemon& l) { os << r; }
 private:
  int radius_;
  std::string sourness_;
}

int main() {
  Lemon l(3.0, "Very sour!");
  std::cout << l << "\n";
}