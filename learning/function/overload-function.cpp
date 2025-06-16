#include <iostream>

using namespace std;

void sum(int numberOne, int numberTwo);
void sum();

int main() {
	sum();

	sum(5, 2);

	return 0;
}

void sum(int numberOne, int numberTwo) {
	int result = numberOne + numberTwo;

	cout << "The sum of " << numberOne << " and " << numberTwo << " is: " << result << "\n\n";
}

void sum() {
	int numberOne, numberTwo, result;

	numberOne = 23;
	numberTwo = 45;

	result = numberOne + numberTwo;

	cout << "The sum of " << numberOne << " and " << numberTwo << " is: " << result << "\n\n";
}
