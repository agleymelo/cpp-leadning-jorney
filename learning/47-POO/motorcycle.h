#ifndef MOTORCYCLE_H_INCLUDED
#define MOTORCYCLE_H_INCLUDED

#include "vehicle.h"

class Motorcycle:public Vehicle {
	public:
		Motorcycle();
};

inline Motorcycle::Motorcycle() {
	velocity = 0;
	shield = 0;
	wheels = 2;
	
	setType(1);
	setMaximumVelocity(200);
	setWeapon(true);


};

#endif