#include <iostream>
#include <string>

int main() {
  std::string buffer;
  std::getline(std::cin, buffer);
  std::cout << buffer << "\n";
  return 0;
}
