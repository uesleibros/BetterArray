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
BetterArray<int> numbers;
numbers.add(7);

std::cout << numbers.get_size() << std::endl; // Returns 1
```

### Iterator
```cpp
 for (Iterator<int> it = numbers.begin(); it != numbers.end(); ++it) {
    std::cout << *it << " ";
 }
 std::cout << std::endl;
```
