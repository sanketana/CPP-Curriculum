#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if the number is a Strong Number
bool isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    // Check if the sum of factorial of digits equals the original number
    return sum == originalNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isStrongNumber(number)) {
        cout << number << " is a Strong Number." << endl;
    } else {
        cout << number << " is NOT a Strong Number." << endl;
    }
    
    return 0;
}