#include <iostream>
using namespace std;

int main()
{
    // Array to store the top 5 high scores
    int highScores[5] = {95, 87, 78, 88, 92};

    // Print the scores
    cout << "Top 5 High Scores:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Score " << i + 1 << ": " << highScores[i] << endl;
    }

    return 0;
}