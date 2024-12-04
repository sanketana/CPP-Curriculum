#include <iostream>
using namespace std;

int main() {
  int *ptr = nullptr;

  if (ptr == nullptr) {
    cout << "Pointer is null" << endl;
  } else {
    cout << "Printing the value of ptr: " << *ptr << endl;
  }
}