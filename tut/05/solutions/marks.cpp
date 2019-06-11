#include <iostream>
#include <list>
#include <vector>

int main() {
  // Manually iterating through a list (forward iteration)
  std::list<int> studentMarks1;
  studentMarks1.push_back(63);
  studentMarks1.push_back(67);
  studentMarks1.push_back(69);
  studentMarks1.push_back(74);
  studentMarks1.push_back(82);

  int median = -1;
  int count = 0;
  for (auto iter = studentMarks1.begin();
  	    iter != studentMarks1.end(); ++iter) {
  	if (count == 2) {
  		median = *iter;
  		break;
  	}
  	count++;
  }

  std::cout << "Median: " << median << "\n";

  // Using a container (vector) with random access iterator
  std::vector<int> studentMarks2;
  studentMarks2.push_back(63);
  studentMarks2.push_back(67);
  studentMarks2.push_back(69);
  studentMarks2.push_back(74);
  studentMarks2.push_back(82);

  std::cout << "Median: " << studentMarks2.at(2) << "\n";
}