#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false; // Numbers less than or equal to 1 are not prime
    if (num == 2)
        return true; // 2 is the smallest prime number
    if (num % 2 == 0)
        return false; // Even numbers greater than 2 are not prime

    // Check divisors from 3 to sqrt(num)
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}