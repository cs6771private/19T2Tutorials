namespace traits {

template <typename T>
struct is_a_pointer {
  static bool type = false;
}

template <typename T>
struct is_a_pointer<T*> {
  static bool type = true;
}

}