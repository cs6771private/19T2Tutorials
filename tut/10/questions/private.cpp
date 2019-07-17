class Base {
 private:
  int i_;
};

class Derived : public Base {
 public:
  void foo(Derived& o) {
    j_ = o.i_ + o.j_;
  }
 private:
  int j_;
};