#!/bin/bash

# Run tests for BetterArray

# Compile the test executable
g++ -Wall -Wextra -std=c++11 -O2 -I../include tests/src/list.cpp -o list
g++ -Wall -Wextra -std=c++11 -O2 -I../include tests/src/remove.cpp -o remove
g++ -Wall -Wextra -std=c++11 -O2 -I../include tests/src/adds.cpp -o adds

# Run the tests
./list
./remove
./adds

# Clean up
rm test
