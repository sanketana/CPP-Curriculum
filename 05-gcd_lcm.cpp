#include <iostream>
using namespace std;

// Function to calculate the GCD using Euclidean algorithm
int calculateGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM using the relation with GCD
int calculateLCM(int a, int b, int gcd)
{
    return (a * b) / gcd;
}

// Function to take two numbers as input and display GCD and LCM
void displayResults()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Calculate GCD
    int gcd = calculateGCD(a, b);
    cout << "The GCD of " << a << " and " << b << " is: " << gcd << endl;

    // Calculate LCM using the previously calculated GCD
    int lcm = calculateLCM(a, b, gcd);
    cout << "The LCM of " << a << " and " << b << " is: " << lcm << endl;
}

int main()
{
    // Display results by calling the displayResults function
    displayResults();

    return 0;
}