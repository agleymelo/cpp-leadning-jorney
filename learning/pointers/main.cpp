#include <iostream>

using namespace std;

int main() {

  string vehicle = "Car";
  string
      *pointer; // Um ponteiro armazena o endereço de mémoria de outra variavel

  pointer =
      &vehicle; // O ponteiro recebe o endereço de memoria da variavel vehicle

  cout << pointer << " " << &vehicle << endl;

  cout << *pointer << endl;

  *pointer = "Bike"; // No endereco apontado pelo ponteiro, o valor da variavel
                     // foi alterado

  cout << vehicle << endl;

  return 0;
}