#include <iostream>
#include <fstream>

using namespace std;

int main() {

	// ofstream, ifstream, fstream

	ofstream file;

	file.open("testing.txt", ios::app);
	file << "Course of C++!\n";
	file.close();

	return 0;
}