//Neccessary Imports
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	//Introduce guessing game header and instantiate crucial variables
	cout << "Welcome to the Guessing Game!";
	char playAgain;
	int randomNumber;
	int guessedNumber;
	int numOfGuesses;

	//Inquire whether user would like to begin game and record
	cout << "Would you like to play the game?(y/n): ";
	cin >> playAgain;

	//If player wants to play..
	while (playAgain == 'y'){
		
		//Create random number and set number of guesses
		srand(static_cast<unsigned>(time(0)));
		randomNumber = rand() % 101;
		numOfGuesses = 1;
		
		//Get first guess
		cout << "Please guess a number between 1-100: ";
		cin >> guessedNumber;
		
		//While guesses are not the random number...
		while (guessedNumber != randomNumber){
			//Say too low or high depending on if the number is lower or higher
			if (guessedNumber < randomNumber){
				cout << guessedNumber << " is too low!\n";
			}
			else{
				cout << guessedNumber << " is too high!\n";
			}

			//Prompt guessingand increase guessNumber
			cout << "Please guess a number between 1-100: ";
			cin >> guessedNumber;
			numOfGuesses += 1;
		}
		//Congratulations text for guessing random number and shows number of guesses
		cout << "Congratulations! You have correctly guess that the number is " << randomNumber << " within " << numOfGuesses << " guesses.\n";

		//Play again prompt
		cout << "Would you like to play a new game?(y/n): ";
		cin >> playAgain;
	}
	//Farewell text
	cout << "\nThank for playing!";

	//int main returns
	return 0;
}
