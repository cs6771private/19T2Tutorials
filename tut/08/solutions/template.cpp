class Rope {
  template <typename T>
  class BaseIterator {
    // When returning values, you're returning copies. The copy shouldn't be const.
    using value_type = std::remove_const<T>::type;
    using reference = T&;
    using pointer = T*;

    ...
  };

 public:
  using iterator = BaseIterator<char>;
  using const_iterator = BaseIterator<const char>;
};
