#include <iostream>
using namespace std;

int main()
{
    // Method 1: Declaring and initializing a 2D array (Static Initialization)
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Displaying elements of array1
    cout << "Static Initialization (array1):\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    // Method 2: Declaring and initializing using shorthand (Row-wise Initialization)
    int array2[2][3] = {1, 2, 3, 4, 5, 6};

    // Displaying elements of array2
    cout << "\nShorthand Initialization (array2):\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }

    // Method 3: Declaring a 2D array and initializing later
    int array3[2][3];
    cout << "\nEnter 6 elements for array3:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array3[i][j];
        }
    }

    // Displaying elements of array3
    cout << "\nUser-defined Initialization (array3):\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array3[i][j] << " ";
        }
        cout << endl;
    }

    // Method 4: Accessing individual elements of a 2D array
    cout << "\nAccessing individual elements:\n";
    cout << "Element at (0,0) in array1: " << array1[0][0] << endl;
    cout << "Element at (1,2) in array2: " << array2[1][2] << endl;
    cout << "Element at (0,1) in array3: " << array3[0][1] << endl;

    return 0;
}