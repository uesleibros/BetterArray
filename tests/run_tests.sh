#!/bin/bash

# Run tests for BetterArray

# Compile the test executable
g++ -Wall -Wextra -std=c++11 -O2 -I../include tests/list.cpp -o list
g++ -Wall -Wextra -std=c++11 -O2 -I../include tests/matrix.cpp -o matrix
g++ -Wall -Wextra -std=c++11 -O2 -I../include tests/remove.cpp -o remove
g++ -Wall -Wextra -std=c++11 -O2 -I../include tests/adds.cpp -o adds

# Run the tests
./list
./matrix
./remove
./adds

# Clean up
rm test
