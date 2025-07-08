#include <iostream>
#include <stack>

using namespace std;

int main() {

	stack<string> colors;

	colors.push("Red");
	colors.push("Blue");
	colors.push("Green");
	colors.push("Orange");

	cout << "Stack size: " << colors.size() << endl;
	cout << "Top element: " << colors.top() << endl;
	
	colors.pop(); // Remove the top element (Orange)
	
	cout << "Stack size: " << colors.size() << endl;
	cout << "Top element: " << colors.top() << endl;

	return 0;
}