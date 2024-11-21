#include <iostream>
using namespace std;

int main()
{
    int rows = 2, cols = 3;
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2];

    // Compute transpose
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = array[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}