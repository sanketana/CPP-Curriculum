#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    string str = to_string(num);
    string revStr = string(str.rbegin(), str.rend());

    if (str == revStr)
        cout << "Palindrome!" << endl;
    else
        cout << "Not a Palindrome!" << endl;

    return 0;
}