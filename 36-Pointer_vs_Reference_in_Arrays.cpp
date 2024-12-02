#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3};

  // Pointer
  int *ptr = arr; // Points to the first element
  for (int i = 0; i < 3; ++i) {
    cout << "Pointer value: " << *(ptr + i) << endl;
  }

  // Reference (Cannot iterate over arrays directly)
  int(&ref)[3] = arr; // Reference to the array
  for (int i = 0; i < 3; ++i) {
    cout << "Reference value: " << ref[i] << endl;
  }

  return 0;
}