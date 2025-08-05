#include <iostream>

using namespace std;

void sum(float *variable, float value);
void initialVector(float *vector);

int main() {

  float number = 89.5;
  float vector[5];

  sum(&number, 56.8);
  initialVector(vector);

  cout << number << endl;

  for (int i = 0; i < 5; i++) {
    cout << vector[i] << endl;
  }

  return 0;
}

void sum(float *variable, float value) { *variable += value; }

void initialVector(float *vector) {
  vector[0] = 3;
  vector[1] = 421;
  vector[2] = 3;
  vector[3] = 894;
  vector[4] = 12;
}
