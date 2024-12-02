#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 20;

  // Pointer
  int *ptr; // Declaration without initialization
  ptr = &a; // Assign address of a
  cout << "Pointer points to a: " << *ptr << endl;

  ptr = &b; // Reassign to point to b
  cout << "Pointer now points to b: " << *ptr << endl;

  // Reference
  int &ref = a; // Must initialize at declaration
  cout << "Reference refers to a: " << ref << endl;

  // Uncommenting the following line will cause an error
  // ref = &b;  // References cannot be reassigned

  return 0;
}
