#include "game.h"
#include <ctime>

Game::Game(int maxNumber)
{
    this->maxNumber = maxNumber;
    this->numOfGuesses = 0;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
    srand(time(0));
    randomNumber = (rand() % maxNumber) + 1;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    while(true)
    {
        cout << "Give your guess between 1-" << maxNumber << ": ";
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess == randomNumber)
        {
            printGameResult();
            return;
        }

        else if (playerGuess > randomNumber)
        {
            cout << "Your guess is too big" << endl;
        }

        else
        {
            cout << "Your guess is too small" << endl;
        }
    }

}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}
