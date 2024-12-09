#include <iostream>
using namespace std;

int main() {
  int numStudents;

  // Step 1: Ask the user for the number of students
  cout << "Enter the number of students: ";
  cin >> numStudents;

  // Step 2: Dynamically allocate memory to store marks
  int *marks = new int[numStudents];

  // Step 3: Input marks for each student
  cout << "\nEnter the marks of " << numStudents << " students:\n";
  for (int i = 0; i < numStudents; i++) {
    cout << "Student " << i + 1 << ": ";
    cin >> marks[i];
  }

  // Step 4: Display marks of all students
  cout << "\nMarks of Students:\n";
  for (int i = 0; i < numStudents; i++) {
    cout << "Student " << i + 1 << ": " << marks[i] << endl;
  }

  // Step 5: Free the dynamically allocated memory
  delete[] marks;

  cout << "\nMemory deallocated successfully!\n";

  return 0;
}