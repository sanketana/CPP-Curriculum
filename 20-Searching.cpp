// Create a vector, search an element within a vector
// Create a list, find an element in the list
// Create a string, find an element in the string

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
  vector<int> numbers = {2, 7, 8, 4, 1, 6, 8, 5, 4, 8};

  int target = 6;

  auto it = find(numbers.begin(), numbers.end(), target);

  cout << *it << endl;
}
