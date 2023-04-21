#ifndef BETTER_ARRAY_H
#define BETTER_ARRAY_H

template<typename T>
class BetterArray {
private:
	T* array;
	int size;
public:
	BetterArray() : size(0), array(nullptr) {};
	BetterArray(int size);
	~BetterArray();
	T& operator[](int index);

	template<typename U>
	class Matrix {
	private:
	  BetterArray<BetterArray<U>> matrix;
	  int rows, cols;
	public:
	  Matrix(int rows, int cols);
	  ~Matrix();
	  BetterArray<U>& operator[](int index);
	};
};

template<typename T>
BetterArray<T>::BetterArray(int size) {
	this->size = size;
	this->array = new T[size];
}

template<typename T>
BetterArray<T>::~BetterArray() {
   delete[] array;
}

template<typename T>
T& BetterArray<T>::operator[](int index) {
   return array[index];
}

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
#endif
