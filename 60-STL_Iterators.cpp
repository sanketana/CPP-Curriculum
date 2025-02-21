#include <forward_list>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
using namespace std;

void printSection(const string &title) {
  cout << "\n=== " << title << " ===\n";
}

int main() {
  cout << "STL Iterator Tutorial\n";
  cout << "====================\n";

  // 1. Basic Iterator Usage
  printSection("Basic Iterator Usage");
  vector<int> numbers = {1, 2, 3, 4, 5};

  cout << "Using iterator to traverse: ";
  for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  // 2. Iterator Categories Demo
  printSection("Iterator Categories");

  // Forward Iterator (forward_list)
  forward_list<int> flist = {1, 2, 3};
  cout << "Forward Iterator: ";
  for (auto it = flist.begin(); it != flist.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  // Bidirectional Iterator (list)
  list<int> lst = {1, 2, 3};
  cout << "Bidirectional Iterator: ";
  for (auto it = lst.end(); it != lst.begin();) {
    --it; // Can move backwards
    cout << *it << " ";
  }
  cout << endl;

  // Random Access Iterator (vector)
  cout << "Random Access Iterator: ";
  vector<int>::iterator vit = numbers.begin();
  cout << "First element: " << *vit << endl;
  cout << "Third element: " << *(vit + 2) << endl; // Direct jumping

  // 3. Iterator Operations
  printSection("Iterator Operations");
  vector<int>::iterator it = numbers.begin();
  cout << "Original position: " << *it << endl;
  advance(it, 2); // Move iterator forward by 2
  cout << "After advance(2): " << *it << endl;

  auto it2 = next(it); // Create new iterator to next position
  cout << "Next position: " << *it2 << endl;

  auto it3 = prev(it); // Create new iterator to previous position
  cout << "Previous position: " << *it3 << endl;

  // 4. Constant Iterators
  printSection("Constant Iterators");
  vector<int>::const_iterator cit = numbers.cbegin();
  cout << "Using const_iterator: ";
  while (cit != numbers.cend()) {
    cout << *cit << " ";
    ++cit;
  }
  cout << endl;

  // 5. Reverse Iterators
  printSection("Reverse Iterators");
  cout << "Using reverse_iterator: ";
  for (vector<int>::reverse_iterator rit = numbers.rbegin();
       rit != numbers.rend(); ++rit) {
    cout << *rit << " ";
  }
  cout << endl;

  // 6. Iterator Distance
  printSection("Iterator Distance");
  auto first = numbers.begin();
  auto last = numbers.end();
  cout << "Distance between begin and end: " << distance(first, last) << endl;

  return 0;
}
