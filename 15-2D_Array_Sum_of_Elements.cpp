#include <iostream>
using namespace std;

int main()
{
    int rows = 2, cols = 3;
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += array[i][j];
        }
    }

    cout << "Sum of all elements: " << sum << endl;
    return 0;
}