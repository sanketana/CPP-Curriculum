#include <iostream>
using namespace std;

int main() {
  int age = 14;

  cout << "Printing the value of varible age: " << age << endl;
  cout << "The varaible age is stored and memory location: " << &age << endl;

  int *ptr = &age;
  cout << "Value stored in ptr, that is the value of age is: " << *ptr << endl;
  cout << "Printing the value of memory location using ptr: " << ptr << endl;

  // Introducing pointer to a pointer
  int **pptr = &ptr;
  cout << "Printing value of pointer to a pointer: " << pptr << endl;
  cout << "Printing value of pointer reference by this pointer to a pointer: "
       << *pptr << endl;
  cout << "Printing the value of original age variable by double referencing: "
       << **pptr << endl;
}
