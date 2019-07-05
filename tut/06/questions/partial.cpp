#include <string>
#include <stdexcept>

class NamedIntPointer {
  NamedIntPointer::NamedIntPointer(int value, const std::string& name):
      ptr_{new int{value}}, name_{name} {
    if (name.empty()) {
      throw std::invalid_argument{"The int pointer must be named"};
    }
  }

  ~NamedIntPointer() {
    delete ptr_;
  }

  int* ptr_;
  std::string name_;
}
