template <typename T>
struct is_real_number {
  static bool type = std::is_integral<T>::type && std::is_floating_point<T>::type;
}