#include <iostream>
#include <vector>

int main() {
  int evens = 0;
  int odds = 1;

  std::vector<int> numbers_array = {2, 4, 3, 6, 1, 9};

  for (int i = 0; i < numbers_array.size(); i++) {

    if (numbers_array[i] % 2 == 0) {
      evens += numbers_array[i];
    } else {
      odds *= numbers_array[i];
    }
  }
  std::cout << "Sum of even numbers is " << evens << "\n";
  std::cout << "Product of odd numbers is " << odds << "\n";

}
