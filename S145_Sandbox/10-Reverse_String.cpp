#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversedStr = "";

    // Iterate the original string from the back
    for ( int i = str.length()-1; i >=0; i--) {
        reversedStr += str[i];
    }

    cout << "Reversed String: " << reversedStr << endl;
    return 0;
}