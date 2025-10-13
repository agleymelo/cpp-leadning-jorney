#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	fstream file;
	char option = 'y';
	string name, line;

	file.open("names.txt", ios::out | ios::app);

	if (!file.is_open()) {
		cout << "Error: could not open the file!" << endl;
		return 1;
	}

	while ((option == 'y') || (option == 'Y')) {
		cout << "Enter a name: ";
		cin >> name;

		file << name << endl;

		cout << "Do you want to enter another name? (y/n): ";
		cin >> option;

		system("clear");
	}

	file.close();

	file.open("names.txt", ios::in);

	cout << "Names: " << endl;

	if (!file.is_open()) {
		cout << "Error: could not open the file!" << endl;
		return 1;
	} else {
		while (getline(file, line)) {
			cout << line << endl;
		}
	}

	file.close();

	return 0;
}