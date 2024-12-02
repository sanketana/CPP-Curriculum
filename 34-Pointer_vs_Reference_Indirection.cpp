#include <iostream>
using namespace std;

int main() {
  int a = 10;

  // Pointer
  int *ptr = &a;
  cout << "Pointer dereferenced: " << *ptr << endl;

  // Reference
  int &ref = a;
  cout << "Reference: " << ref << endl;

  return 0;
}