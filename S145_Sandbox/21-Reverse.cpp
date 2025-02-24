// Declate a vector
// Print the vector
// Reverse the vector
// Print it again
// Repeat the above steps for list
// Repeat the above steps for String
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<int> myVector = {1, 2, 3, 4, 5, 6};

  cout << "Printing before reversing..." << endl;
  for (int num : myVector) {
    cout << num << endl;
  }

  reverse(myVector.begin(), myVector.end());
  cout << "Printing after reversing..." << endl;
  for (int num : myVector) {
    cout << num << endl;
  }

  // Reversing a part of a vector
  vector<int> myVector2 = {1, 2, 3, 4, 5, 6};
  reverse(myVector2.begin() + 2, myVector2.end());
  cout << "Printing after partial reversing reversing..." << endl;
  for (int num : myVector2) {
    cout << num << endl;
  }

  // Reversing a String
  string myText = "Abhinav Bhardwaj";
  cout << "My name is " << myText << endl;
  reverse(myText.begin(), myText.end());
  cout << "My revsersed name is " << myText << endl;

  vector<int> myVector3 = {9, 1, 3};
  auto it = myVector3.begin() + 2;
  auto it1 = myVector3.end();
  cout << "Printing myVector3 start value " << *it << endl;
  cout << "Printing myVector 3 last but one value " << *it1 << endl;
}