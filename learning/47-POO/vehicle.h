#include <iostream>

class Vehicle {
	public:
		int velocity;
		int shield;
		int wheels;

		void setType(int type);
		void setMaximumVelocity(int maximumVelocity);
		void setWeapon(bool weapon);

		void print();

	private:
		int type;
		int maximumVelocity;
		bool weapon;
};

inline void Vehicle::setType(int type) {
	this->type = type;
}

inline void Vehicle::setMaximumVelocity(int maximumVelocity) {
	this->maximumVelocity = maximumVelocity;
}

inline void Vehicle::setWeapon(bool weapon) {
	this->weapon = weapon;
}

inline void Vehicle::print() {
	std::cout << "Type: " << this->type << std::endl;
	std::cout << "Velocity: " << this->velocity << std::endl;
	std::cout << "Maximum Velocity: " << this->maximumVelocity << std::endl;
	std::cout << "Weapon: " << this->weapon << std::endl;
	std::cout << "Wheels: " << this->wheels << std::endl;
	std::cout << "Shield: " << this->shield << std::endl << std::endl;
}