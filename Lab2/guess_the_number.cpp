#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with current time
    int randomNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have picked a number between 1 and 100. Can you guess it?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You've guessed the number (" << randomNumber << ") in " << attempts << " attempts!\n";
        }
    } while (guess != randomNumber);

    return 0;
}
