#include <iostream>

using namespace std;

int main() {

  int *pointer;
  int vector[10];

  // pointer = vector; // e mesma coisa que fazer pointer = &vector[0]

  pointer = &vector[0];
  // *pointer = 10;
  // cout << "\n " << vector[0] << endl;

  // *(pointer++);
  // *pointer = 20;
  // cout << "\n " << vector[1] << endl;

  // *(pointer++);
  // *pointer = 33;
  // cout << "\n " << vector[2] << endl;

  for (int i = 0; i < 10; i++) {
    *(pointer + i) = i * 5;
    cout << "\n " << vector[i] << endl;
  }

  return 0;
}