#include <iostream>

using namespace std;

struct Car {
  string name;
  string color;
  int horsepower;
  int maxSpeed;
  int price;

  void insert(string name, string color, int horsepower, int maxSpeed, int price) {
    this->name = name;
    this->color = color;
    this->horsepower = horsepower;
    this->maxSpeed = maxSpeed;
    this->price = price;
  }

  void print() {
    cout << this->name << " " << this->color << " " << this->horsepower << " " << this->maxSpeed << " " << this->price << endl;
  }

  void changeSpeed(int newSpeed) {
    if (newSpeed > maxSpeed) {
      newSpeed = maxSpeed;
    }

    if (newSpeed < 0) {
      newSpeed = 0;
    }
  }
};

int main() {

  Car *cars = new Car[5];
  Car car1,car2,car3,car4,car5;

  cars[0] = car1;
  cars[1] = car2;
  cars[2] = car3;
  cars[3] = car4;
  cars[4] = car5;

  cars[0].insert("Toyota Corolla", "Blue", 90, 100, 100000);
  cars[1].insert("Toyota Camry", "Red", 120, 150, 150000);
  cars[2].insert("Toyota RAV4", "Green", 110, 140, 120000);
  cars[3].insert("Toyota Highlander", "Yellow", 130, 160, 180000);
  cars[4].insert("Toyota Land Cruiser", "Black", 140, 170, 200000);

  for (int i = 0; i < 5; i++) {
    cars[i].print();
  }
  
  return 0;
}