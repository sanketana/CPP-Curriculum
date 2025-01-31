// Declare a vector
// Insert element into a vector
// Iterate a vector
// delete elements

#include <iostream>
#include <vector>
using namespace std;

void myPrint(vector<int> nums) {
  for (int num : nums) {
    cout << num << endl;
  }
}

int main() {
  // Declare a vector
  vector<int> myVector;

  // Initialize a vector
  myVector.push_back(7);
  myVector.push_back(8);
  myVector.push_back(9);
  myVector.push_back(2);
  myVector.push_back(0);

  // Interate or print value of a vector
  myPrint(myVector);

  // Print a particular element of a vector at a particular
  cout << "Printing element at index 2, 3rd position: " << myVector[2] << endl;

  // Remove an element from the end
  myVector.pop_back();
  cout << "Printing after popping last element" << endl;
  myPrint(myVector);

  // Remove an element at a particular index
  myVector.erase(myVector.begin() + 2);
  myPrint(myVector);

  // Insert an element at a particular location
  vector<int> newVector;
  newVector.push_back(5);
  newVector.push_back(3);
  newVector.push_back(6);
  newVector.push_back(7);
  newVector.insert(newVector.begin() + 2, 2);
  cout << "Inserting at a location" << endl;
  myPrint(newVector);

  // Capacity related function, size of the arrary, size, capacity
  vector<int> capacityVector;
  capacityVector.push_back(5);
  capacityVector.push_back(3);
  capacityVector.push_back(6);
  capacityVector.push_back(7);
  capacityVector.push_back(7);
  capacityVector.push_back(7);
  capacityVector.push_back(7);
  capacityVector.push_back(7);
  capacityVector.push_back(7);
  cout << "The size of Capacity Vector is: " << capacityVector.size() << endl;
  cout << "The Capacity of Capacity Vector is: " << capacityVector.capacity();
}

/*
Input:

Please enter number of element: 5
enter element 1: 6
enter element 2: 3
..
enter element 5: 1

largest of enter 5 element is: 6 and smallest is 1
*/