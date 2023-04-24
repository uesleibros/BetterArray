#include <iostream>
#include "../include/BetterArray.h"

int main() {
   Array<int> numeros = {};

   for (int i = 0; i < 20; i++) {
     numeros.add(i * 4);
   }
  
   for (Array<int>::Iterator it = numeros.begin(); it != numeros.end(); ++it) {
      std::cout << *it << " ";
   }
   std::cout << std::endl;

   return 0;
}
