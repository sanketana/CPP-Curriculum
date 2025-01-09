#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversedStr = ""; // Initialize an empty string for the reversed result

    // Append characters in reverse order
    for (int i = str.length() - 1; i >= 0; --i) {
        reversedStr += str[i];
    }

    cout << "Reversed String: " << reversedStr << endl;
    return 0;
}