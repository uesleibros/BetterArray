#include <iostream>
#include "../include/BetterArray.h"

int main() {
   Array<int> numeros = {1, 2, 3, 4, 5, 6, 7};

   numeros.remove(2);
   numeros.remove(4);
   std::cout << numeros.get_size(); << std::endl;
  
   for (Array<int>::Iterator it = numeros.begin(); it != numeros.end(); ++it) {
      std::cout << *it << " ";
   }
   std::cout << std::endl;

   return 0;
}
