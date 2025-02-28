// Create a Student Class
// Create certain objects of student class
// Create Attributes of the class
// Create certain methods of the class
#include <iostream>
using namespace std;

class Student {
    // Attributes
    string name;
    int rollNo;

    public:
       Student(string n, int r){
        name = n;
        rollNo = r;
       }

       Student(){
        name = "Default Name";
        rollNo = 0;
       }

       void setName(string n){
        name = n;
       }

       string getName(){
        return name;
       }

       void setRollNo(int r){
        rollNo = r;
       }

       int getRollNo(){
        return rollNo;
       }
};

int main() {
    // Create objects of Student class
    Student DS;
    DS.setName("Divit");
    cout << "Student name: " << DS.getName() << endl;
    DS.setRollNo(10);
    cout << "Student roll number: " << DS.getRollNo() << endl;

    Student AB("Abhinav", 11);
    cout << "Student name: " << AB.getName() << endl;
    cout << "Student roll number: " << AB.getRollNo() << endl;
}
