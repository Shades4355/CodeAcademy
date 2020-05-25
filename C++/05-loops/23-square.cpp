#include <iostream>

int main() {

  int i = 0;
  int square = 0;

  // Write a while loop here:
  int iterations;

  while (i < 10) {
    std::cout << i;
    square = i;
    iterations = 1;

    while (iterations < i) {
      square *= i;
      iterations++;
    }
    std::cout << square << "\n";
  }

}
