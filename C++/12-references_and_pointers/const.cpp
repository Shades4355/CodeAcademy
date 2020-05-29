#include <iostream>
// 'const' - if 'i' changes, an error will be thrown
// '&i' - saves the computational cost of making a copy of the argument
int square(int const &i) {

  return i * i;

}

int main() {

  int side = 5;

  std::cout << square(side) << "\n";

}
