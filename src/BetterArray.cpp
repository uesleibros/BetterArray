#include "include/BetterArray.h"

template<typename T>
template<typename U>
BetterArray<U>& BetterArray<T>::Matrix<U>::operator[](int index) {
    return matrix[index];
}

template<typename T>
template<typename U>
BetterArray<T>::Matrix<U>::Matrix(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    this->matrix = BetterArray<BetterArray<U>>(rows);
    for (int i = 0; i < rows; i++) {
        matrix[i] = BetterArray<U>(cols);
    }
}

template<typename T>
template<typename U>
BetterArray<T>::Matrix<U>::~Matrix() {}
