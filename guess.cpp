#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" <<endl;
    cout << "I have chosen a number between 1 and 100. Can you guess it?" <<endl;

    do {
        // Ask the player to guess the number
        cout << "Enter your guess: ";
        cin >> guess;

        // Increment the number of attempts
        attempts++;

        // Check if the guess is correct, higher, or lower
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts!" <<endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Try again! The secret number is higher than your guess." << endl;
        } else {
            cout << "Try again! The secret number is lower than your guess." <<endl;
        }

    } while (true);

    return 0;
}

