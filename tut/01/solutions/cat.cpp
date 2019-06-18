#include <iostream>
#include <string>

int main() {
  // a std::string is a dynamically-sized character array, which
  //  means we are not required to worry about the fixed-sized arrays
  //  that we're used to in C. In this way it makes it harder to overflow
  //  a char array or waste memory. std::string is also a class meaning
  //  a lot of important pieces of data associated with the types are stored in
  //  the object itself (e.g. size). Strings also have the added benefits
  //  of providing an iterator to loop through the string 
  std::string buffer;


  //
  std::getline(std::cin, buffer);

  //
  std::cout << buffer << "\n";
  return 0;
}
