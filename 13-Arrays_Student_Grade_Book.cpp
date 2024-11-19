#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 5; // Max number of students in the system

// Function to display student list with their grades
void displayStudents(string names[], int grades[], int count)
{
    if (count == 0)
    {
        cout << "No students to display." << endl;
        return;
    }
    cout << "\nStudent List:" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". " << names[i] << " - Grade: " << grades[i] << endl;
    }
}

// Function to add a new student
void addStudent(string names[], int grades[], int &count)
{
    if (count >= MAX_STUDENTS)
    {
        cout << "Maximum student limit reached!" << endl;
        return;
    }
    cout << "Enter student name: ";
    getline(cin, names[count]);
    cout << "Enter student grade (0-100): ";
    cin >> grades[count];
    cin.ignore(); // To ignore the newline character after grade input
    count++;
    cout << "Student added successfully!" << endl;
}

// Function to update a student's grade
void updateGrade(string names[], int grades[], int count)
{
    int studentIndex;
    cout << "Enter the student number to update grade (1-" << count << "): ";
    cin >> studentIndex;
    cin.ignore(); // To ignore the newline character after index input

    if (studentIndex < 1 || studentIndex > count)
    {
        cout << "Invalid student number!" << endl;
        return;
    }

    cout << "Current grade of " << names[studentIndex - 1] << ": " << grades[studentIndex - 1] << endl;
    cout << "Enter new grade (0-100): ";
    cin >> grades[studentIndex - 1];
    cin.ignore(); // To ignore the newline character after grade input
    cout << "Grade updated successfully!" << endl;
}

// Function to delete a student's record
void deleteStudent(string names[], int grades[], int &count)
{
    int studentIndex;
    cout << "Enter the student number to delete (1-" << count << "): ";
    cin >> studentIndex;
    cin.ignore(); // To ignore the newline character after index input

    if (studentIndex < 1 || studentIndex > count)
    {
        cout << "Invalid student number!" << endl;
        return;
    }

    // Shift all students after the deleted student one position up
    for (int i = studentIndex - 1; i < count - 1; i++)
    {
        names[i] = names[i + 1];
        grades[i] = grades[i + 1];
    }
    count--;
    cout << "Student record deleted successfully!" << endl;
}

int main()
{
    string studentNames[MAX_STUDENTS]; // Array to store student names
    int studentGrades[MAX_STUDENTS];   // Array to store student grades
    int studentCount = 0;              // Current count of students

    int choice;
    bool running = true;

    while (running)
    {
        cout << "\nStudent Grade Management System" << endl;
        cout << "1. Display all students and grades" << endl;
        cout << "2. Add a new student" << endl;
        cout << "3. Update student's grade" << endl;
        cout << "4. Delete a student's record" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character after input

        switch (choice)
        {
        case 1:
            displayStudents(studentNames, studentGrades, studentCount);
            break;
        case 2:
            addStudent(studentNames, studentGrades, studentCount);
            break;
        case 3:
            updateGrade(studentNames, studentGrades, studentCount);
            break;
        case 4:
            deleteStudent(studentNames, studentGrades, studentCount);
            break;
        case 5:
            cout << "Exiting program..." << endl;
            running = false;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}