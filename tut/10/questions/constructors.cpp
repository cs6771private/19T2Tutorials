#include <list>
#include <iostream>

class X {
public:
  X() { std::cout << "ctor "; }
  X(const X&) { std::cout << "copy-ctor "; }
  ~X() { std::cout << "dtor "; }
};

int main() {
  {
    std::cout << "Pointer: "
    std::list<X*> l;
    X x;
    l.push_back(&x);
  }

  {
    std::cout << "\nValue: "
    std::list<X> l;
    X x;
    l.push_back(x);
  }
}
