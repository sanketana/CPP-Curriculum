#include <iostream>
using namespace std;

int *createDanglingPointer() {
  int a = 10; // Local variable
  return &a;  // Returning address of local variable
}

int main() {
  int *danglingPtr = createDanglingPointer();
  cout << "Dangling pointer address: " << danglingPtr << endl;

  // Accessing dangling pointer (undefined behavior)
  cout << "Value at dangling pointer: " << *danglingPtr << endl;

  return 0;
}