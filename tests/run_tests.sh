#!/bin/bash

# Run tests for BetterArray

# Compile the test executable
g++ -Wall -Wextra -std=c++11 -O2 -I../include ./tests/test.cpp -o test

# Run the tests
./test

# Clean up
rm test
