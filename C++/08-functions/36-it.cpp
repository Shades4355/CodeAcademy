#include <iostream>

std::string it_greeting() {
  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;

  return on_off_attempt;
}

int main() {

  // Conduct IT support
  std::string on_off_attempt;
  it_greeting();

  // Check in with Jenn
  std::cout << "Oh hi Jen!\n";

  // Conduct IT support again...
  it_greeting();

  // Check in with Roy
  std::cout << "You stole the stress machine? But that's stealing!\n";

  // Conduct IT support yet again...zzzz...
  it_greeting();

}
