#include <iostream>
using namespace std;
int main() {
    int num;
    int reversed = 0;

    cin >> num;
    while (num > 0) {
        int last_digit = num % 10;
        reversed = (reversed * 10) + last_digit;
        num = num / 10;
    }

    cout << "Reversed number is: " << reversed << endl;
}