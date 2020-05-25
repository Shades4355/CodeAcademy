#include <iostream>

int main() {

  double weight
  int planet, relWeight;

  std::cout << "What is your weight (kg)? ";
  std::cin >> weight;

  std::cout "\n\nWhat planet would you like to fight on? (1 Venus - 6 Neptune) ";
  std::cin >> planet;

  switch (planet) {
    case 1 :
      relWeight = weight * 0.78;
      break;
    case 2 :
      relWeight = weight * 0.39;
      break;
    case 3 :
      relWeight = weight * 2.65;
      break;
    case 4 :
      relWeight = weight * 1.17;
      break;
    case 5 :
      relWeight = weight * 1.05;
      break;
    case 6 :
      relWeight = weight * 1.23;
      break;
  }

}
