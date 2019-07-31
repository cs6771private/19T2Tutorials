template <typename T>
struct is_real_number {
  static bool type = std::is_integral<T>::type || std::is_floating_point<T>::type;
}

// Alternative solution - the solution above won't compile in some instances
template <typename T>
using is_real_number = std::is_arithmetic<T>;