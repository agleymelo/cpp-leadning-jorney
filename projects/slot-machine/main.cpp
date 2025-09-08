#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	const char *symbols[] = {"🍒", "🍋", "🔔", "💎", "7", "🍀"};
	const int symbol_count = sizeof(symbols) / sizeof(symbols[1]);
	char choice;

	srand((unsigned int) time(NULL));

	printf("Welcome to the Slot Machine!\n");

	do {
		// 0 ... 999,99 RAND_MAX / 9 = 0, 1, 2, 3, 4, 5, 6
		int i1 = rand() % symbol_count;
		int i2 = rand() % symbol_count;
		int i3 = rand() % symbol_count;

		printf("\nSpinning...\n\n");
		printf("| %s | %s | %s |\n\n", symbols[i1], symbols[i2], symbols[i3]);

		if (i1 == i2 && i2 == i3) {
			printf("🎉 JACKPOT! All three match!\n");
		} else if (i1 == i2 || i2 == i3 || i1 == i3) {
			printf("✨ Nice! Your got two matching symbols!\n");
		} else {
			printf("🙁 No match. Try again!");
		}

		printf("\nPlay again? (Y/N): ");
		scanf(" %c", &choice);

	} while (choice == 'y' || choice == 'Y');

	printf("\nThanks for playing! 🎲\n");

	return 0;
}