#include <iostream>
#include "../include/BetterArray.h"

int main() {
   ArrayMulti<int> matriz;
   Array<int> numeros;

   numeros.add(2);
   numeros.add(7);
   numeros.add(8);
   numeros.add(1);

   numeros.append({1, 2, 3});

   matriz[0] = {};
   matriz[0].append({74, 87, 32, 5});

   std::cout << matriz[0].get_size() << std::endl;
   for (Array<int>::Iterator it = numeros.begin(); it != numeros.end(); ++it) {
      std::cout << *it << " ";
   }
   std::cout << std::endl;

   return 0;
}
