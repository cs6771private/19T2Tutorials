#include <iostream>
#include <set>
#include <unordered_set>
template <typename T, template<class, class...> class CONT>
class SillySet {
 public:
  void insert(T t);
  bool erase(T t);
  friend std::ostream& operator<<(std::ostream& os, SillySet s) {
    for (const auto& i : s.set_) {
      os << i << " ";
    }
    return os;
  }
 private:
  CONT<T> set_;
};
template <typename T, template<class, class...> class CONT>
void SillySet<T, CONT>::insert(T t) {
  set_.insert(t);
}
template <typename T, template<class, class...> class CONT>
bool SillySet<T, CONT>::erase(T t) {
  auto it = set_.find(t);
  if (it != set_.end()) {
    set_.erase(it);
    return true;
  }
  return false;
}
int main() {
  SillySet<float, std::set> s;
  SillySet<int, std::unordered_set> us;
  s.insert(5.4);
  s.insert(6.2);
  s.erase(5.4);
  std::cout << s << "\n";
  us.insert(5);
  us.insert(6);
  us.erase(5);
  std::cout << us << "\n";
}
