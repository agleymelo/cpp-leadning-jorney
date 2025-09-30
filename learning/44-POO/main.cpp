#include <iostream>

using namespace std;

class Person {
	public:
		string name;
		string gender;
		int age;

		void insert(string name, string gender,int age);
		
	private:
};

void Person::insert(string name, string gender, int age) {
	this->name = name;
	this->gender = gender;

	if (age < 0) {
		return;
	}
	
	this->age = age;
}

int main() {

	Person *person_one = new Person();

	person_one->insert("John Doe", "Male", 20);

	cout << person_one->name << endl;
	cout << person_one->gender << endl;
	cout << person_one->age << endl;

	return 0;
}