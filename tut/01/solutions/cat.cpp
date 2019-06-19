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


  // getline, although slower than fgets, is easier to use as
  //  no explicit buffer size or maximum size is required. That's handled
  //  by the steram and string object. fgets also doesn't work with
  //  a string, but instead only a raw character array
  std::getline(std::cin, buffer);

  // printf has some benefits such as complex format strings, however,
  //  using streams and cout gives more power by allowing for the use
  //  of operator overloading, so that objects themselves have more
  //  control over how they're printed out
  std::cout << buffer << "\n";
  return 0;
}
