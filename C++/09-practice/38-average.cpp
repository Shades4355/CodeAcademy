#include <iostream>

// Define average() here:
double average(double num1, double num2) {
  double output = (num1 + num2) / 2;

  return output;
}

int main() {

  std::cout << average(42.0, 24.0) << "\n";
  std::cout << average(1.0, 2.0) << "\n";

}
