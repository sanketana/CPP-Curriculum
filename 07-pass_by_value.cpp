#include <iostream>
using namespace std;

// Function to swap two integers (pass-by-value)
void swapValues(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapValues function - a: " << a << ", b: " << b << endl;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before swapping - x: " << x << ", y: " << y << endl;

    // Attempt to swap x and y using pass-by-value
    swapValues(x, y);

    cout << "After calling swapValues - x: " << x << ", y: " << y << endl;

    return 0;
}