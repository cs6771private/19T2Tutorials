#ifndef TUTORIALS_WEEK3_CAR_H_
#define TUTORIALS_WEEK3_CAR_H_

#include <string>

class Car {
 public:
  Car(): Car{"unknown", 4} {}
  Car(const std::string& manufacturer, int n_seats): manufacturer_{manufacturer}, num_seats_{n_seats} {
    ++n_objects;
  }

  ~Car() noexcept;

  const std::string& GetManufacturer() const;
  int GetNumSeats() const;

  static int GetNumCars();

 private:
  std::string manufacturer_;
  int num_seats_;

  static int n_objects;
};

#endif  // TUTORIALS_WEEK3_CAR_H_
