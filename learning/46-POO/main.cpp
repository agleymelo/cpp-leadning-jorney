#include <iostream>
#include "classes.h"

using namespace std;

int main() {

	Vehicle *vehicle = new Vehicle(1);
	Vehicle *vehicle_two = new Vehicle(2);
	Vehicle *vehicle_three = new Vehicle(3);

	vehicle->setTurnOn(0);
	vehicle_two->setTurnOn(	1);
	vehicle_three->setTurnOn(0);
	
	cout << vehicle->getMaxVelocity() << endl; 
	cout << vehicle_two->getMaxVelocity() << endl; 
	cout << vehicle_three->getMaxVelocity() << endl; 

	if (vehicle->getTurnedOn()) {
		cout << "Vehicle One is turned on" << endl;
	} else {
		cout << "Vehicle One is turned off" << endl;
	}

	if (vehicle_two->getTurnedOn()) {
		cout << "Vehicle Two is turned on" << endl;
	} else {
		cout << "Vehicle Two is turned off" << endl;
	}

	if (vehicle_three->getTurnedOn()) {
		cout << "Vehicle Three is turned on" << endl;
	} else {
		cout << "Vehicle Three is turned off" << endl;
	}


	return 0;
}