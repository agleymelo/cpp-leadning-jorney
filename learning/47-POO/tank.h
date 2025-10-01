#include "motorcycle.h"

class Tank:public Vehicle {
	public:
		Tank();
};

inline Tank::Tank() {
	velocity = 0;
	shield = 3;
	wheels = 12;

	setType(4);
	setMaximumVelocity(40);
	setWeapon(true);
}