#include <string>

class Book {
 public:
  int GetIsbn() const { return isbn_; }
  double GetPrice() const  { return price_; }

 private:
  std::string name_;
  std::string author_;
  int isbn_;
  double price_;
};