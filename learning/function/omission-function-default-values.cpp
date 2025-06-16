#include <iostream>

using namespace std;

void printMessage(string message = "Hello, World!");

int main() {

	printMessage();
	printMessage("Welcome to C++ programming!");

	return 0;
}

void printMessage(string message) {
	cout << message << "\n";
}
