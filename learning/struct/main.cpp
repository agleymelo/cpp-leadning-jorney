#include <iostream>

using namespace std;

struct Car {
  string name;
  string color;
  int horsepower;
  int maxSpeed;
  int price;
};

int main() {

  Car car;
  car.name = "Toyota";
  car.color = "Red";
  car.horsepower = 100;
  car.maxSpeed = 250;
  car.price = 100000;

  cout << car.name << endl;
  cout << car.color << endl;
  cout << car.horsepower << endl;
  cout << car.maxSpeed << endl;
  cout << car.price << endl;

  return 0;
}