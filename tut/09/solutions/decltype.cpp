int main() {
	int i = 5;
    int& k = i;

	decltype(i) x; // int; - variable
    decltype(k) y; // int& - lvalue
    decltype(std::move(i)) z; // int&& - xvalue
    decltype(4.2);   // int - prvalue	
	
}