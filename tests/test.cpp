#include "../include/BetterArray.h"
#include <iostream>

int main(int argc, char* argv[]) {
  BetterArray<int> n;
  n.add(1);
  n.add(7);

  std::cout << "Working! " << n[1] << std::endl;
}
