template <typename T>
auto my_make_unique(T item) {
  return std::unique_ptr<T>{new T{item}};
}

int main() {
  MyClass myClass{"MyClass"};
  std::cout << *my_make_unique<MyClass>(myClass) << "\n";
  std::cout << *my_make_unique<MyClass>(std::move(myClass)) << "\n";
  NonCopyable nonCopyable{"NonCopyable"};
  std::cout << *my_make_unique<NonCopyable>(std::move(nonCopyable)) << "\n\n";

  // Use the size constructor.
  std::cout << my_make_unique<std::vector<MyClass>>(5U)->size() << "\n";

  // Use the size-and-value constructor.
  MyClass base{"hello"};
  std::cout << my_make_unique<std::vector<MyClass>>(6U, base)->size() << "\n";
}