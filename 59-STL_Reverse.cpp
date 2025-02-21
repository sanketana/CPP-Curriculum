#include <algorithm>
#include <array>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

int main() {
  cout << "STL reverse() Tutorial\n";
  cout << "=====================\n\n";

  // Example 1: Reversing a vector
  cout << "1. Reversing a vector:\n";
  vector<int> numbers = {1, 2, 3, 4, 5};

  cout << "Original: ";
  for (int num : numbers)
    cout << num << " ";
  cout << endl;

  reverse(numbers.begin(), numbers.end());

  cout << "Reversed: ";
  for (int num : numbers)
    cout << num << " ";
  cout << "\n\n";

  // Example 2: Reversing part of a vector
  cout << "2. Reversing part of a vector:\n";
  vector<int> partial = {1, 2, 3, 4, 5, 6, 7, 8};

  cout << "Original: ";
  for (int num : partial)
    cout << num << " ";
  cout << endl;

  // Reverse only elements from index 2 to 5
  reverse(partial.begin() + 2, partial.begin() + 6);

  cout << "Partially reversed: ";
  for (int num : partial)
    cout << num << " ";
  cout << "\n\n";

  // Example 3: Reversing a string
  cout << "3. Reversing a string:\n";
  string text = "Hello World";
  cout << "Original: " << text << endl;

  reverse(text.begin(), text.end());
  cout << "Reversed: " << text << endl;

  // Example 4: Reversing an array
  cout << "4. Reversing an array:\n";
  array<int, 5> arr = {1, 2, 3, 4, 5};

  cout << "Original array: ";
  for (int num : arr)
    cout << num << " ";
  cout << endl;

  reverse(arr.begin(), arr.end());

  cout << "Reversed array: ";
  for (int num : arr)
    cout << num << " ";
  cout << "\n\n";

  // Example 5: Reversing a list
  cout << "5. Reversing a list:\n";
  list<int> myList = {10, 20, 30, 40, 50};

  cout << "Original list: ";
  for (int num : myList)
    cout << num << " ";
  cout << endl;

  myList.reverse(); // List has its own reverse member function

  cout << "Reversed list: ";
  for (int num : myList)
    cout << num << " ";
  cout << "\n\n";

  // Interactive example for students
  cout << "\nTry it yourself!\n";
  cout << "Enter a word to reverse: ";
  string input;
  cin >> input;
  reverse(input.begin(), input.end());
  cout << "Your word reversed: " << input << endl;

  return 0;
}
