#include <iostream>
using namespace std;

int main() {
  int num = 42;
  int *ptr = &num;

  cout << "Value of num: " << num << endl;
  cout << "Address of num: " << &num << endl;
  cout << "Value stored at ptr: " << &ptr << endl;

  return 0;
}