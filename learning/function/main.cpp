#include <iostream>

using namespace std;

void text();
void sum(int numberOne, int numberTwo);
int sum2(int numberOne, int numberTwo);
void printTransport(string transports[4]);

int main() {
	string transports[4] = { "Car", "Bus", "Bicycle", "Train" };

	for (int i = 0; i < 4; i++) {
		text();
	}

	sum(5, 10);
	sum(56, 3);

	int result = sum2(1, 0);

	cout << "Result One: " << result << "\n";
	cout << "Result Two: " << sum2(23, 689) << "\n";

	printTransport(transports);

	return 0;
}

void text() {
	cout << "Hello, World!" << "\n";
}

void sum(int numberOne, int numberTwo)  {
	int result = numberOne + numberTwo;

	cout << "The sum of " << numberOne << " and " << numberTwo << " is: " << result << "\n\n";
}

int sum2(int numberOne, int numberTwo) {
	return numberOne + numberTwo;
}

void printTransport(string transports[4]) {
	for (int i = 0; i < 4; i++) {
		cout << "Transport: " << transports[i] << "\n";
	}
}