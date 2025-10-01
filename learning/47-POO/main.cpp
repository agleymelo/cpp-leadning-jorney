#include <iostream>
#include "motorcycle.h"
#include "car.h"
#include "tank.h"

using namespace std;

int main() {
	Motorcycle *motorcycle = new Motorcycle();
	Car *car = new Car();
	Tank *tank = new Tank();

	motorcycle->print();
	car->print();
	tank->print();

	return 0;
}