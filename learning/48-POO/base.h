
#include <iostream>

class Base {
	public:
		void printBase();

};

inline void Base::printBase() {
	std::cout << "Base" << std::endl;
}

class BaseTwo {
	public:
		void printBaseTwo();
};

inline void BaseTwo::printBaseTwo() {
	std::cout << "Base Two" << std::endl;
}

class Children:public Base, public BaseTwo {};