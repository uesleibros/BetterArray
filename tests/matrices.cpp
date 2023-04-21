#include <iostream>
#include "include/BetterArray.h"

int main(int argc, char* argv[]) {
   BetterArray<BetterArray<int>> myMatrix(2);
	for (int i = 0; i < 2; i++) {
	  myMatrix[i] = BetterArray<int>(3);
	}

	for (int i = 0; i < 2; i++) {
	  for (int j = 0; j < 3; j++) {
	      myMatrix[i][j] = i * j;
	  }
	}

	for (int i = 0; i < 2; i++) {
	  for (int j = 0; j < 3; j++) {
	      std::cout << myMatrix[i][j] << " ";
	  }
	  std::cout << std::endl;
	}
	return 0;
}
