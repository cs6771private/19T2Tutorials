#ifndef TUTORIALS_WEEK4_BOOK_H_
#define TUTORIALS_WEEK4_BOOK_H_

#include <string>
#include <ostream>

class Book {
 public:
  Book(const std::string& name, const std::string& author, int isbn, double price):
      name_{name}, author_{author}, isbn_{isbn}, price_{price} {}

  // Since these are just getters, we put them in the header file.
  int getIsbn() const { return isbn_; }
  double getPrice() const { return price_; }

  // Type conversion operators
  operator std::string() const;

  // Friend comparison operators. Note that we always declare these inline.
  friend bool operator==(const Book& a, const Book& b) {
    return (a.name_ == b.name_) && (a.author_ == b.author_) &&
        (a.isbn_ == b.isbn_) && (a.price_ == b.price_);
  }

  friend bool operator!=(const Book& lhs, const Book& rhs) {
    return !(lhs == rhs);
  }

  friend bool operator<(const Book& a, const Book& b) {
    return a.isbn_ < b.isbn_;
  }

  friend std::ostream& operator<<(std::ostream& out, const Book& b) {
    return out << "Name: \"" << b.name_ << "\", "
               << "(Author: \")" << b.author_ << "(\", )"
               << "ISBN: " << b.isbn_ << ", "
               << "Price: " << b.price_;
  }

 private:
  std::string name_;
  std::string author_;
  int isbn_;
  double price_;
};

#endif // TUTORIALS_WEEK4_BOOK_H_
