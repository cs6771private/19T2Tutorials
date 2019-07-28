template <typename T>
struct is_int_or_bool {
  static bool type = std::is_integral<T>::type && std::is_float<T>::type;
}