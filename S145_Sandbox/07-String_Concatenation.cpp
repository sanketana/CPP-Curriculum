#include <iostream>
#include <string>
using namespace std;

int main() {
  string first_name = "Abhinav";
  string last_name = "Bhardwaj";
  string full_name = first_name + " " + last_name;
  string full_name1 = first_name.append(last_name);

  cout << "My full name is " << full_name << endl;
  cout << "My full name (using append function) is " << full_name1 << endl;
}