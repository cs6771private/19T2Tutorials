std::istream& operator>>(std::istream& is, Point& p) {
  return is >> p.x_ >> p.y_;
}

