#include <iostream>
#include <string>
using namespace std;

int main() {
  string fname;
  string lname;

  cout << "Please enter your first name: " << endl;
  cin >> fname;
  cout << "Please enter your last name: " << endl;
  cin >> lname;

  string initials;

  // Using square bracket notation
  initials = string(1, fname[0]) + '.' + string(1, lname[0]) + '.';

  // Using Substr function
  string initials1;
  initials1 = fname.substr(0, 1) + '.' + lname.substr(0, 1) + '.';

  cout << "Your intial is: " << initials << endl;

  cout << "Your intials created using substr is: " << initials1 << endl;
}