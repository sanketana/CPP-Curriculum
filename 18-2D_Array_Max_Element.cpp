#include <iostream>
using namespace std;

int main()
{
    int rows = 3, cols = 4;
    int array[3][4] = {
        {1, 5, 3, 7},
        {8, 12, 9, 4},
        {6, 14, 2, 10}};

    int maxElement = array[0][0]; // Assume the first element is the largest

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (array[i][j] > maxElement)
            {
                maxElement = array[i][j];
            }
        }
    }

    cout << "The maximum element in the 2D array is: " << maxElement << endl;

    return 0;
}