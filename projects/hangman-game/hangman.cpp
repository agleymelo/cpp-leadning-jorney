#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	char word[30], letter[1], secret[30];
	int length = 0, index = 0, chances = 5, hits = 0; 
	bool found = false;

	cout << "Welcome to the Hangman Game!" << "\n";

	cout << "Tell for your friend close your eyes and enter a word: " << "\n";
	cin >> word;

	system("clear");

	while (word[index] != '\0') {
		index++;
		length++;
	}

	for (index = 0; index < length; index++) {
		secret[index] = '_';
	}


	while ((chances > 0) && (hits < length)) {
		cout << "Life: " << chances << "\n";
		cout << "Current word: \n";

		for (index = 0; index < length; index++) {
			cout << secret[index];
		}

		cout << "\n\nEnter a letter: ";
		cin >> letter[0];

		bool letterAlreadyFound = false;

		for (index = 0; index < length; index++) {
			if (secret[index] == letter[0]) {
				letterAlreadyFound = true;
				cout << "You already found this letter!" << "\n";
				break;
			}
		}

		if (!letterAlreadyFound) {
			for (index = 0; index < length; index++) {
				if (word[index] == letter[0]) {
					found = true;
					secret[index] = letter[0];
					hits++;
				}
			}
		}

		if(!found) {
			chances--;
			cout << "Letter not found! You have " << chances << " chances left.\n\n";
		}

		found = false;
		system("clear");
	}

	if (hits == length) {
		cout << "Congratulations! You found the word: " << word << "\n";
	} else {
		cout << "Game over! The word was: " << word << "\n";
		cout << "Better luck next time!" << "\n";
	}

	return 0;
}