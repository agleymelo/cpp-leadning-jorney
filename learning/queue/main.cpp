#include <iostream>
#include <queue>

using namespace std;

int main() {

	/* 
		empty
		size
		front
		back
		push
		pop
	*/

	queue<string> colors;
	
	colors.push("Red");
	colors.push("Blue");
	colors.push("Green");
	colors.push("Orange");
	
	cout << "Queue size: " << colors.size() << endl;
	cout << "First color: " << colors.front() << endl;
	cout << "Last color: " << colors.back() << endl << endl;

	while (!colors.empty()) {
		cout << "First color: " << colors.front() << endl;

		colors.pop();
	}

	return 0;
}