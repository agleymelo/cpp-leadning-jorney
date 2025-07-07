#include <iostream>

using namespace std;

int main() {

	enum vehicles {
		CAR = 1,
		TRUCK,
		BIKE,
		MOTORCYCLE,
		AIRPLANE,
		BOAT,
	};

	vehicles vehicleSelect;

	vehicleSelect = CAR;

	cout << "The selected vehicle is: "  << vehicleSelect << endl; 

	return 0;
}