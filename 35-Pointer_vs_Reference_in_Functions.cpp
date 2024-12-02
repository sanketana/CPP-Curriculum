#include <iostream>
using namespace std;

// Function using pointer
void modifyWithPointer(int *ptr) {
  if (ptr) { // Check for null
    *ptr = 20;
  }
}

// Function using reference
void modifyWithReference(int &ref) {
  ref = 20; // Always valid
}

int main() {
  int a = 10;

  // Using pointer
  modifyWithPointer(&a);
  cout << "Modified using pointer: " << a << endl;

  // Using reference
  modifyWithReference(a);
  cout << "Modified using reference: " << a << endl;

  return 0;
}