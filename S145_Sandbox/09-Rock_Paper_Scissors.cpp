#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //srand(time(0));

    string choices[3] = {"Rock", "Paper", "Scissors"};
    int userChoice;
    cout << "Choose an option: \n";
    cout << "0: Rock\n 1: Paper\n 2: Scissors\n";
    cin >> userChoice;
    cout << "User Choice: " << choices[userChoice] << endl;


    int computerChoice = time(0) % 3;
    //cout << computerChoice << endl;
    cout << "Computer Choice: " << choices[computerChoice] << endl;

    // Logic to check winner
    if (userChoice == computerChoice) {
        cout << "Its a draw" << endl;
    }
    else if (
        (userChoice == 1 && computerChoice == 0) ||
        (userChoice == 0 && computerChoice == 2) ||
        (userChoice == 2 && computerChoice == 1)
    ) {
        cout << "User Wins!" << endl;
    }
    else
    {
        cout << "Player Wins!" << endl;
    }

}

