const std::vector<int> vec;
std::list<int> li;
std::forward_list<double> forward_li;
std::string s;

vec.begin();  // const random access iterator 
vec.cbegin();  // const random access iterator 
(*vec.begin())++;  // Fails to compile (vector is const, attempt to access non-const iterator) 
li.cbegin();  // const bidirectional iterator 
li.rbegin();  // const bidirectional iterator 
forward_li.cbegin();  // const forward iterator 
(*forward_li.begin())++;  // forward iterator 
(*forward_li.cbegin())++;  // fails to compile (attempt to modify non-const iterator) 
forward_li.crbegin();  // Fails to compile (cannot get reverse iterator for forward iterators) 
s.begin();  // const random access iterator 
std::back_inserter(vec);  // Compiles. Can't invoke the dereference operator to insert anything because you get a compile time error.
std::back_inserter(li);  // Output iterator 
std::istream_iterator<int>(std::cin);  // Input iterator 
std::ostream_iterator<int>(std::cout, " ");  // Output iterator 

