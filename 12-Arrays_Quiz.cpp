#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Array of quiz questions
    string questions[] = {
        "What is the capital of France?",
        "Which planet is known as the Red Planet?",
        "What is 5 + 3?",
        "What is the chemical symbol for water?",
        "Who wrote 'Harry Potter'?"};

    // Array of corresponding answers
    string answers[] = {
        "Paris",
        "Mars",
        "8",
        "H2O",
        "J.K. Rowling"};

    int totalQuestions = sizeof(questions) / sizeof(questions[0]); // Determine the number of questions
    int score = 0;

    cout << "Welcome to the Quiz Game!" << endl;
    cout << "Answer the following questions:" << endl;

    // Loop through each question
    for (int i = 0; i < totalQuestions; i++)
    {
        string userAnswer;

        // Display question
        cout << "\nQ" << (i + 1) << ": " << questions[i] << endl;
        cout << "Your answer: ";
        getline(cin, userAnswer); // Get user's answer

        // Check if the answer is correct
        if (userAnswer == answers[i])
        {
            cout << "Correct!" << endl;
            score++;
        }
        else
        {
            cout << "Wrong! The correct answer is: " << answers[i] << endl;
        }
    }

    // Display final score
    cout << "\n--- Quiz Completed! ---" << endl;
    cout << "You scored " << score << " out of " << totalQuestions << "!" << endl;

    return 0;
}

/*
Possible Extensions

	1.	Random Questions: Shuffle the order of questions using random numbers.
	2.	Multiple Choice: Convert questions to multiple-choice format and store options in a 2D array.
	3.	Timed Quiz: Introduce a timer for each question for an added challenge.
*/