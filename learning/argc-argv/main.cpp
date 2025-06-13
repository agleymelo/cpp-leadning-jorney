#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[]) {

	if (argc > 1) {
		if (strcmp(argv[1], "sun") == 0) {
			cout << "The sun is shining!" << "\n\n";
		} else if(strcmp(argv[1], "rain") == 0) {
			cout << "The rain is pouring!" << "\n\n";
		} else {
			cout << "Stay in home!" << "\n\n";
		}
	}

	system("pause");

	return 0;
}