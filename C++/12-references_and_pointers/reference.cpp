#include <iostream>

int main() {

  int soda = 99;

  int &pop = soda;

  pop += 1;

  std::cout << "Soda: " << soda <<"\n";
  std::cout << "Pop: " << pop;
}
