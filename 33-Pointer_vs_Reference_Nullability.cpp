#include <iostream>
using namespace std;

int main() {
  int *ptr = nullptr; // Pointer initialized to null
  if (ptr == nullptr) {
    cout << "Pointer is null." << endl;
  }

  // Reference cannot be null
  // Uncommenting the following line will cause an error
  // int &ref;  // References must be initialized

  return 0;
}