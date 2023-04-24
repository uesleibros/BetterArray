#include <iostream>
#include "../include/BetterArray.h"

int main() {
   Array<int> numeros = {};

   numeros.add(2);
   numeros.add(7);
   numeros.add(8);
   numeros.add(1);

   numeros[4] = {};

   for (Array<int>::Iterator it = numeros.begin(); it != numeros.end(); ++it) {
      std::cout << *it << " ";
   }
   std::cout << std::endl;

   return 0;
}
