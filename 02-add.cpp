#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x, y;
    x = 10;
    y = 20;
    cout << "The sum of " << x << " and " << y << " is " << add(x, y);
}