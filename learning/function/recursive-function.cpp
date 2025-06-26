#include <iostream>

using namespace std;

void count(int amount, int current = 0);

int main() {

	count(18);

	return 0;
}

void count(int amount, int current) {
	cout << current << "\n";

	if (amount > current) {
		count(amount, ++current);
	}
}