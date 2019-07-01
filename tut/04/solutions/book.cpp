#include "tutorials/week4/book.h"

#include <ostream>

Book::operator std::string () const {
  return author_ + "," + name_;

  // Potentially more flexible.
  /*
  std::stringstream ss;
  ss << author_ << "," << name_;
  return ss.str();
  */
}

