#include <iostream>
using namespace std;

int main() {
  int *ptr = nullptr;

  if (ptr == nullptr) {
    cout << "Pointer is null." << endl;
  }

  int num = 100;
  ptr = &num;

  cout << "Pointer now points to: " << *ptr << endl;

  return 0;
}