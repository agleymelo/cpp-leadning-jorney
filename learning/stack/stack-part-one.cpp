#include <iostream>
#include <stack>

using namespace std;

int main() {

	stack<string> colors;
	
	colors.push("Red");
	colors.push("Blue");
	colors.push("Green");
	colors.push("Orange");

	if (colors.empty()) {
		cout << "Stack is empty." << endl << endl;
	} else {
		cout << "Stack is not empty." << endl;
	}

	cout << "Stack size: " << colors.size() << endl;
	cout << "Top element: " << colors.top() << endl << endl;
	
	while (!colors.empty()) {
		colors.pop();
	}

	return 0;
}