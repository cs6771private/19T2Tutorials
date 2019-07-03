#include "tutorials/week4/book.h"

#include <algorithm>
#include <iostream>
#include <vector>

// Helper function to print vectors of books.
void print(const std::string& title, const std::vector<Book>& books) {
  std::cout << title << '\n';
  for (const auto& b: books) {
    std::cout << "\t";
    std::cout << b << '\n';
  }
  std::cout << '\n';
}

int main() {
  std::vector<Book> books1{
      Book{"Book1", "Author1", 2222, 12.2},
      Book{"Book2", "Author2", 1111, 11.50},
      Book{"Book3", "Author3", 3333, 10.50}};

  std::vector<Book> books2{
      Book{"Book1", "Author1", 2222, 12.2},
      Book{"Book2", "Author2", 1111, 11.50},
      Book{"Book3", "Author3", 3333, 10.50}};

  print("Books:", books1);

  // Call the std::vector<Book> operator==() overload which in
  // turn calls Book operator==() overload.
  std::cout << "Vector of books are equal: "
            << "books1 " << (books1 == books2 ? "==" : "!=")
            << " books2\n\n";

  std::sort(books1.begin(), books1.end());
  print("Default (ISBN) sorted books:", books1);

  std::cout << "Vector of books are no longer equal: "
            << "books1 " << (books1 == books2 ? "==" : "!=")
            << " books2\n\n";

  std::sort(books1.begin(), books1.end(),
            [](const Book& a, const Book& b) {
              return a.getPrice() < b.getPrice();
            }
  );

  print("Price sorted books:", books1);
}
