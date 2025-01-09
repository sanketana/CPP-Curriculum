#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation
    string choices[3] = {"Rock", "Paper", "Scissors"};
    int userChoice;
    
    cout << "Choose an option:\n";
    cout << "0: Rock\n1: Paper\n2: Scissors\n";
    cin >> userChoice;

    int computerChoice = rand() % 3;
    cout << "You chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!\n";
    } else {
        cout << "You lose!\n";
    }

    return 0;
}