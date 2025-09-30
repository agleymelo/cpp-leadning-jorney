#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <string>

class Vehicle {
	public:
		Vehicle(int vehicleType);
		
		int velocity;
		int type;
		
		int getMaxVelocity();
		bool getTurnedOn();
		void setTurnOn(int x);

	private:
		std::string name;
		int maxVelocity;
		bool isTurnedOn;

		void setVelocity(int velocity);
};

inline Vehicle::Vehicle(int vehicleType) {
	type = vehicleType;
	

	if (type == 1) {
		name = "Car";
		setVelocity(240);
	} else if (type == 2) {
		name = "Plane";
		setVelocity(800); 
	} else if (type == 3) {
		name = "Motorcycle";
		setVelocity(300);
	} else {
		return;
	}

	setTurnOn(0);

}

inline int Vehicle::getMaxVelocity() {
	return maxVelocity;
}

inline void Vehicle::setVelocity(int velocity) {
	this->maxVelocity = velocity;
}

inline bool Vehicle::getTurnedOn() {
	return isTurnedOn;
}

inline void Vehicle::setTurnOn(int x) {
	if (x == 1) {
		isTurnedOn = true;
	} else if (x == 0){
		isTurnedOn = false;
	}
}

#endif