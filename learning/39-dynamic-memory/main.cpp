#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

	const int MAX_LENGTH = 100;

	char *vname;
	vname = (char *) malloc(MAX_LENGTH * sizeof(char));

	if (vname == NULL) {
		cout << "Error: could not allocate memory!";
		return 1;
	}
	
	cout << "Enter your name: ";
	cin.getline(vname, MAX_LENGTH);

	cout << endl << vname;

	free(vname);

	return 0;
}