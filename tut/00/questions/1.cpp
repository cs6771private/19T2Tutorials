#include <iostream>
#include <string>

class Lemon {
 public:
  explicit Lemon(const int r, std::string s) : sourness_{s}, radius_{r} {}
  friend std::ostream& operator<<(std::ostream& os, const Lemon& l) { os << l.radius_; return os; }
 private:
  int radius_;
  std::string sourness_;
};

int main() {
  Lemon l(3, "Very sour!");
  std::cout << l << "\n";
}
