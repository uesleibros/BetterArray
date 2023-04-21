# BetterArray
> BetterArray is a C++ library that provides a more convenient and efficient way to work with arrays. It allows you to easily create and manipulate one-dimensional and two-dimensional arrays of any data type, and provides various useful features such as bounds checking, automatic memory management, and overloaded operators for easy access and manipulation of array elements. The library is designed to be easy to use and integrate into your own projects, and comes with comprehensive documentation and unit tests to ensure correctness and reliability.

## Features:

- Support for one-dimensional and two-dimensional arrays;
- Support for any data type;
- Automatic memory management;
- Bounds checking;
- Overloaded operators for easy access and manipulation of array elements;
- Easy to use and integrate into your own projects;
- Comprehensive documentation and unit tests;

## Usage:

1. Download the library from GitHub;
2. Include the header file "BetterArray.h" in your project;
3. Create a BetterArray object with the desired size and data type;
4. Access and manipulate array elements using the overloaded [] operator or other available methods;
5. Compile and run your project;

## Example
### List
```cpp
BetterArray<int> numbers(10);
for (int i = 0; i < numbers.size; i++) {
  numbers[i] = i + 1;
}

std::cout << numbers.size << std::endl;
std::cout << numbers[3] << std::endl;
```

### Matrice
```cpp
BetterArray<int>::Matrix<int> matrix(3, 3);

for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    matrix[i][j] = i * j;
  }
}

for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    std::cout << matrix[i][j] << " ";
  }
  std::cout << std::endl;
}
```
