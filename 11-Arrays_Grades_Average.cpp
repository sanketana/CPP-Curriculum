#include <iostream>
using namespace std;

int main()
{
    int grades[5] = {88, 76, 92, 85, 79};
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += grades[i];
    }

    float average = total / 5.0;

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}