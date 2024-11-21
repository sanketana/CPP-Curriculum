#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int matrix[3][3] = {{1, 2, 3}, {2, 5, 6}, {3, 6, 9}};
    bool isSymmetric = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = false;
                break;
            }
        }
    }

    if (isSymmetric)
        cout << "The matrix is symmetric.\n";
    else
        cout << "The matrix is not symmetric.\n";

    return 0;
}