#include <iostream>
#include <cmath>  // For pow() function
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of digits raised to the power of 'digits'
    temp = num;
    while (temp != 0) {
        int lastDigit = temp % 10;
        sum += pow(lastDigit, digits);
        temp /= 10;
    }

    // Check if the sum equals the original number
    return (sum == originalNum);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number!" << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}