#include <iostream>
#include "base.h"

using namespace std;

int main() {
	Base *base = new Base();
	BaseTwo * baseTwo = new BaseTwo();

	Children *children = new Children();


	// base->printBase();
	// baseTwo->printBaseTwo();
	children->printBase();
	children->printBaseTwo();

	return 0;
}