#include <iostream>
#include <list>

using namespace std;

int main() {

	list<int> lessons;
	int length = 10;

	list<int>::iterator it;

	for (int i = 0; i < length; i++) {
		lessons.push_front(i + 1);
	}

	it = lessons.begin();
	advance(it, 8); // Move iterator to the 6th element
	
	lessons.insert(it, 100); // Insert 100 before the 6th element

	cout << "Lessons size: " << lessons.size() << endl; 

	lessons.sort(); // Sort the lessons in ascending order
	lessons.reverse(); // Reverse the order of the lessons

	length = lessons.size();
	
	for (int i = 0; i < length; i++) {
		cout << lessons.front() << endl;
		lessons.pop_front();
	}

	return 0;
}