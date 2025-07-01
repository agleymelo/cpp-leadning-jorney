#include <iostream>

using namespace std;

int factorial(int number);
int fibonacci(int number);

int main() {

	int value;

	cout << "Enter a number to calculate its factorial: ";
	cin >> value;

	cout << endl;

	int result = factorial(value);

	cout << "The factorial of " << value << " is: " << result << endl;

	int resultFibonacci = fibonacci(value);

	cout << "The Fibonacci of " << value << " is: " << resultFibonacci << endl;

	return 0;
}

int factorial(int number) {
	if (number == 0) {
		return 1;
	}

	return number * factorial(number - 1);
}

int fibonacci(int number) {
	if (number == 1 || number == 2) {
		return 1;
	}

	return fibonacci(number - 1) + fibonacci(number - 2);
}