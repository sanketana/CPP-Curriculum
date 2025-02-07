// Create a Vector
// Initialize it
// Sort it & Print it
// Reverse Sort & Print it --> Method 1
// Reverse Sort & Print it --> Method 2

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// Custom comparator fucntion sortByLength
bool sortByLength(string a, string b) { return a.length() > b.length(); }

int main() {
  // Create a vector of type it
  vector<int> myNumbers;

  // Initialize with 5 elements
  myNumbers.push_back(3);
  myNumbers.push_back(1);
  myNumbers.push_back(5);
  myNumbers.push_back(9);
  myNumbers.push_back(2);

  cout << "Printing before Sorting" << endl;
  for (int num : myNumbers) {
    cout << num << " ";
  }

  cout << endl;

  // Lets sort it using STL sort
  sort(myNumbers.begin(), myNumbers.end());

  cout << "Printing after Sorting" << endl;
  for (int num : myNumbers) {
    cout << num << " ";
  }
  cout << endl;

  // Lets try to create a vector using curly bracket or list notation
  vector<int> myVector = {4, 8, 1, 3, 0, 5, 9, 2};

  cout << "Printing before reverse Sorting" << endl;
  for (int num : myVector) {
    cout << num << " ";
  }
  cout << endl;

  // Lets sort it using STL sort
  sort(myVector.rbegin(), myVector.rend());

  cout << "Printing after reverse Sorting" << endl;
  for (int num : myVector) {
    cout << num << " ";
  }
  cout << endl;

  // Using Custom comparator for sorting
  vector<string> myFriends = {
      "Ram",     "Shyam",
      "Abhinav", "Arun",
      "Divit",   "Venkatanathan Balasubramanian Ramanujam Krishnamurthy Iyer"};

  // Default behaviour is soring based on alphabatical order or lexically
  // sort(myFriends.begin(), myFriends.end());

  // How to sort based on name length
  sort(myFriends.begin(), myFriends.end(), sortByLength);
  for (auto name : myFriends) {
    cout << name << " ";
  }
}