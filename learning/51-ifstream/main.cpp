#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ofstream fileOutput;

	fileOutput.open("testing.txt", ios::app);
	fileOutput << "Course of C++!\n";
	fileOutput << "Today to learning to use ifStream!\n";
	fileOutput.close();

	ifstream fileInput;
	string line; // variable to store the line read from the file

	fileInput.open("testing.txt");
	if (!fileInput.is_open()) {
		cout << "Error: could not open the file!" << endl;

		return 1;
	} else {
		while (getline(fileInput, line)) {
			cout << line << endl;
		}

		fileOutput.close();
	}

	return 0;
}