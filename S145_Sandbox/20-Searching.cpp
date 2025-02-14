// Create a string, find an element in the string

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
  // Create a vector, search an element within a vector
  vector<int> numbers = {2, 7, 8, 4, 1, 9, 8, 5, 4, 8};

  int target = 0;

  auto it = find(numbers.begin(), numbers.end(), target);

  if (it == numbers.end()) {
    cout << "Element " << target << " not found in the vector" << endl;
  } else {
    cout << "Element " << target << " found at the index "
         << distance(numbers.begin(), it);
  }

  // Create a list, find an element in the list
  list<int> numList = {2, 7, 8, 4, 1, 9, 8, 5, 4, 8};
  int searchVal = 1;

  auto it1 = find(numList.begin(), numList.end(), searchVal);

  if (it1 == numList.end()) {
    cout << "Element " << searchVal << " not found in the list" << endl;
  } else {
    cout << "Element " << searchVal << " found at the index "
         << distance(numList.begin(), it1) << endl;
  }

  string myString = "Hello World!";
  char charToFind = 'e';

  auto it2 = find(myString.begin(), myString.end(), charToFind);

  if (it2 == myString.end()) {

    cout << "Not Found" << endl;
  } else {
    cout << "Yayy, Found!" << endl;
  }
}
