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
    cout << this->name << endl;
    cout << this->color << endl;
    cout << this->horsepower << endl;
    cout << this->maxSpeed << endl;
    cout << this->price << endl;
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

  Car car;
  car.insert("Toyota Corolla", "Blue", 90, 100, 100000);
  car.changeSpeed(180);
  car.print();
  
  return 0;
}