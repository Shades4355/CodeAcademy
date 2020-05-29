/*
 But the & sign can have another meaning.

The “address of” operator, &, is used to get the memory address, the location in the memory, of an object.
*/

#include <iostream>

int main() {

  int power = 9000;

  // Print power (value)
  std::cout << power << "\n";

  // Print &power (memory location)
  std::cout << &power << "\n";

}
