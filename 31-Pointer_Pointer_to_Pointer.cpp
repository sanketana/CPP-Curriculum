#include <iostream>
using namespace std;

int main() {
  // Step 1: Create an integer variable
  int number = 42;

  // Step 2: Create a pointer to the integer
  int *ptr = &number;

  // Step 3: Create a pointer-to-pointer
  int **ptrToPtr = &ptr;

  // Step 4: Print the values and addresses
  cout << "Value of number: " << number << endl;
  cout << "Address of number: " << &number << endl;

  cout << "\nValue stored in ptr (Address of number): " << ptr << endl;
  cout << "Value pointed by ptr (Value of number): " << *ptr << endl;

  cout << "\nValue stored in ptrToPtr (Address of ptr): " << ptrToPtr << endl;
  cout << "Value pointed by ptrToPtr (Address of number): " << *ptrToPtr
       << endl;
  cout << "Value pointed by *ptrToPtr (Value of number): " << **ptrToPtr
       << endl;

  return 0;
}