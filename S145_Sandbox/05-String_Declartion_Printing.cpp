#include <iostream>
#include <string>
using namespace std;

int main() {
  // declaring a string
  string name = "Abhinav Bhardwaj";

  // declating another string using raw initialization
  string location("Bangalore");

  cout << "My name is " << name << ", and I reside in " << location << endl;

  // Finding length of a string
  int name_length = name.size();

  cout << "The number of characters in my name including space is "
       << name_length << endl;

  // Alternate syntax to find length of string
  int location_length = location.length();

  cout << "The number of characters in " << location << " is "
       << location_length << endl;
}