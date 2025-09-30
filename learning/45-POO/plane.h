#ifndef PLANE_H_INCLUDED
#define PLANE_H_INCLUDED

#include <string>
#include <iostream>

class Plane {
	public:
		int velocity = 0;
		int maxVelocity;
		std::string type;

		Plane(int tp);
		void print();

	private:
};

// Called when the object is created, this is a constructor method
inline Plane::Plane(int tp) {
	if (tp == 1) {
		type = "Jet";
		maxVelocity = 800;
	} else if (tp == 2) {
		type = "Propeller";
		maxVelocity = 350;
	} else if (tp == 3) {
		type = "Helicopter";
		maxVelocity = 250;
	} else {
		maxVelocity = 0;
	}
}

// Called when the object is printed
inline void Plane::print() {
	std::cout << "Plane Type: " << type << " | Max Velocity: " << maxVelocity << " | Velocity: " << velocity << std::endl << std::endl;
}

#endif