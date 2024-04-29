#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    cout << "Let's play Rock, Paper, Scissors!\n";
    cout << "Enter your choice (rock, paper, or scissors): ";
    string userChoice;
    cin >> userChoice;

    string computerChoice;
    int computerNum = rand() % 3;
    switch (computerNum) {
        case 0:
            computerChoice = "rock";
            break;
        case 1:
            computerChoice = "paper";
            break;
        case 2:
            computerChoice = "scissors";
            break;
    }

    cout << "Computer chooses: " << computerChoice << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == "rock" && computerChoice == "scissors") ||
               (userChoice == "paper" && computerChoice == "rock") ||
               (userChoice == "scissors" && computerChoice == "paper")) {
        cout << "Congratulations! You win!\n";
    } else {
        cout << "Sorry, you lose. Better luck next time!\n";
    }
    return 0;
}
