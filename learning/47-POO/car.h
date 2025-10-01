#include "motorcycle.h"

class Car:public Vehicle {
	public:
		Car();
};

inline Car::Car() {
	velocity = 0;
	shield = 1;
	wheels = 4;

	setType(2);
	setMaximumVelocity(180);
	setWeapon(false);
}