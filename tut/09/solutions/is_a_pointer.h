namespace traits {

template <typename T>
struct is_a_pointer {
  static constexpr bool value = false;
}

template <typename T>
struct is_a_pointer<T*> {
  static constexpr bool value = true;
}

}