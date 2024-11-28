#include <iostream>
using namespace std;

int main() {
  float num = 3.14;
  float *ptr = &num;

  cout << "Original value: " << *ptr << endl;

  *ptr = 6.28; // Modify value using pointer
  cout << "Modified value: " << *ptr << endl;

  return 0;
}