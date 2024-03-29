#include <iostream>
#include "song.hpp"

int main() {
  Song electric_relaxation;

  electric_relaxation.add_title("Electric Relaxation");
  std::cout << electric_relaxation.get_title();

  // electric_relaxation.artist = "A Tribe Called Quest" doesn't work because [.artist] is private
  electric_relaxation.add_artist("A Tribe Called Quest");
  std::cout << electric_relaxation.get_artist();
}
