#include <iostream>
#include <string>
using namespace std;

// Student class example
class Student {
private:
    // Private data members (attributes)
    string name;
    int roll_number;
    char grade;

public:
    // Constructor
    Student(string n, int roll) {
        name = n;
        roll_number = roll;
        grade = 'N';  // Default grade as 'N' for Not Assigned
    }

    // Method to set student's grade
    void set_grade(char g) {
        if (g >= 'A' && g <= 'F') {
            grade = g;
        } else {
            cout << "Invalid grade! Please enter A-F" << endl;
        }
    }

    // Method to display student information
    void display_info() {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Grade: " << grade << endl;
    }
};

// Example usage
int main() {
    // Creating a student object
    Student student1("John Doe", 101);
    
    // Display initial information
    student1.display_info();
    
    // Set student's grade
    student1.set_grade('A');
    
    // Display updated information
    student1.display_info();
    
    return 0;
}