#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	cout << "Welcome to the Guessing Game!";
	char playAgain;
	int randomNumber;
	int guessedNumber;
	int numOfGuesses;

	cout << "Would you like to play the game?(y/n): ";
	cin >> playAgain;
	while (playAgain == 'y'){

		srand(static_cast<unsigned>(time(0)));
		randomNumber = rand() % 101;
		numOfGuesses = 1;

		cout << "Please guess a number between 1-100: ";
		cin >> guessedNumber;

		while (guessedNumber != randomNumber){
			if (guessedNumber < randomNumber){
				cout << guessedNumber << " is too low!\n";
			}
			else{
				cout << guessedNumber << " is too high!\n";
			}
			cout << "Please guess a number between 1-100: ";
			cin >> guessedNumber;
			numOfGuesses += 1;
		}
		cout << "Congratulations! You have correctly guess that the number is " << randomNumber << " within " << numOfGuesses << " guesses.\n";


		cout << "Would you like to play a new game?(y/n): ";
		cin >> playAgain;
	}
	cout << "\nThank for playing!";
	return 0;
}
