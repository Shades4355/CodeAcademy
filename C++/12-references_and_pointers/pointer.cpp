/*
Pointers are syntactically distinguished by the [*], so that [int*] means “pointer to int“ and [double*] means “pointer to double“.
*/

#include <iostream>

int main() {

  int power = 9000;

  // Create pointer
  int* ptr = &power;

  // Print ptr
  std::cout << ptr;

}
