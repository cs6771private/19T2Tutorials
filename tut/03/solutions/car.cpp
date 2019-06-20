#include "tutorials/week3/car.h"

int Car::n_objects = 0;

Car::~Car() noexcept {
  --n_objects;
}

const std::string& Car::GetManufacturer() const {
  return manufacturer_;
}

int Car::GetNumSeats() const {
  return num_seats_;
}

int Car::GetNumCars() {
  return n_objects;
}

