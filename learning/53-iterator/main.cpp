#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
	vector<string> products = {"mouse", "keyboard", "monitor", "speaker", "printer"};

	for (vector<string>::iterator it = products.begin(); it != products.end(); it++) {
		cout << *it << endl;
		cout << &it << endl;
	}

	// advance(it, 1);

	// cout << *next(it, 2) << endl;
	// cout << *prev(it, 3) << endl;

	return 0;
}