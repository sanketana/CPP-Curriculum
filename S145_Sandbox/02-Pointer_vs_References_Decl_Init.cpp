#include <iostream>
using namespace std;

int main() {
  int age = 14;
  int score = 20;

  // Declaring a pointer
  int *ptr;

  // Initialize a pointer;
  ptr = &age;

  // Declaring a reference to age
  int &age_ref = age;

  cout << "Printing &age_ref: " << &age_ref << endl;
  cout << "Printing age_ref: " << age_ref << endl;
  cout << "Printing &age: " << &age << endl;

  // Trying to reassign the age_ref --> this gives an error
  int &age_ref = score;
}
