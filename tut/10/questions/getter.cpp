class Base {
 public:
  const int& GetI() const { return i_; }
 private:
  int i_;
};

class Derived : public Base {
 public:
  void foo(Derived &o) {
    j_ = o.GetI() + o.j_;
  }
 private:
  int j_;
};
