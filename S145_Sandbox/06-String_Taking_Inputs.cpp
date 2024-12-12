#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  // cout << "Please enter your name: " << endl;
  // cin >> name;
  // cout << "Your name as collected using cin is: " << name << endl;

  cout << "Please enter your name again: " << endl;
  getline(cin, name);
  cout << "Your name as collected using getline is: " << name << endl;
}