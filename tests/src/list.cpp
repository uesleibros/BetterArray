#include <iostream>
#include "../include/BetterArray.h"

int main() {
   Array<int> numeros = {1, 2, 3, 4, 5, 6, 7};

   for (Array<int>::Iterator it = numeros.begin(); it != numeros.end(); ++it) {
      std::cout << *it << " ";
   }
   std::cout << std::endl;

   return 0;
}
