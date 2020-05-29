#include <iostream>

int main() {

  int power = 9000;

  // Create pointer
  int* ptr = &power;

  // Print ptr
  std::cout << ptr << "\n"; // location

  // Print *ptr
  std::cout << *ptr << "\n"; // value

}
