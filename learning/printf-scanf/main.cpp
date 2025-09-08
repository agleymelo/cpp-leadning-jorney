#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  int number_one = 123;
  int number_two = 456;
  int number_three = 789;

  printf("Hello, World!\nAnother line\n");
  printf("Value of variables: %d %d %d\n", number_one, number_two,
         number_three);

  return 0;
}

/**
  %u - unsigned integer
  %d - integer
  %f - float
  %c - character
  %s - string
  %p - pointer
  %x - hexadecimal
  %o - octal
  %e - exponential notation
  %g - general floating point notation
*/