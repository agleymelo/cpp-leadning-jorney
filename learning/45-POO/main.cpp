#include "plane.h"

int main() {

	Plane *plane_one = new Plane(3);
	Plane *plane_two = new Plane(1);
	Plane *plane_three = new Plane(2);

	plane_one->print();
	plane_two->print();
	plane_three->print();

	return 0;
} 