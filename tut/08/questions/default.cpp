#include <iostream>
#include <set>

template <typename T>
class SillySet {
 public:
  void insert(T t);
  bool erase(T t);
 private:
  std::set<T> set_;
};

int main() {

  SillySet<float> s;
  SillySet<int> us;

  s.insert(5.4);
  s.insert(6.2);
  s.erase(5.4);
  std::cout << s << "\n";

  us.insert(5);
  us.insert(6);
  us.erase(5);

  std::cout << us << "\n";

}