#include <iostream>
using namespace std;

// Function to find the maximum of two numbers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the max function and display the result
    int maximum = max(num1, num2);
    cout << "The maximum of " << num1 << " and " << num2 << " is " << maximum << endl;

    return 0;
}