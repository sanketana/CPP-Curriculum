#include <iostream>
using namespace std;

int main() {
  // Dynamically allocate memory for an integer
  int *num = new int;

  cout << "Enter a value for the integer: ";
  cin >> *num;

  // Print the value stored in dynamic memory
  cout << "Value stored: " << *num << endl;

  // Free the allocated memory
  delete num;
  cout << "Memory freed successfully!" << endl;

  return 0;
}