#include <iostream> // Include the input-output stream library
using namespace std;

int main()
{
    int a = 10;
    int *a_pointer = &a;
    cout << "Value of a" << a << endl;
    cout << "Address of a" << &a << endl;
    cout << "Pointer of a" << a_pointer << endl;
    cout << "Printing value at a_pointer" << *a_pointer << endl;

    return 0;
}