//    _                     
//   /_\  _ _ _ _ __ _ _  _   _____________________________________________
//  / _ \| '_| '_/ _` | || |  & A better array for C++                    &
// /_/ \_\_| |_| \__,_|\_, |  & version 1.0                               &
//                     |__/   & https://github.com/uesleibros/BetterArray &
/**************************************************************************\
+ License: Apache-2.0                                                      -
+ Open-Source                                                              -
+ Made with ♥️ for you.                                                    -
\**************************************************************************/

#ifndef BETTER_ARRAY_INL
#define BETTER_ARRAY_INL

#include <iostream>
#include <stdexcept>

template <typename T>
BetterArray<T>::~BetterArray() {
   delete[] data;
}

template<typename T>
T& BetterArray<T>::operator[](int index) {
	if (index < 0 || index > size_ - 1) {
		std::cerr << "List index out of range." << std::endl;
		system("pause");
	}
   return data[index];
}

template <typename T>
int BetterArray<T>::get_size() {
	return size_;
}

template <typename T>
void BetterArray<T>::add(const T& value) {
	T* nData = new T[size_ + 1];
	for (int i = 0; i < size_; i++) {
		nData[i] = data[i];
	}
	nData[size_] = value;
	size_++;
	delete[] data;
	data = nData;
}

template <typename T>
void BetterArray<T>::remove(int index) {
	if (index < 0 || index > size_ - 1) {
		throw std::out_of_range("List index out of range.");
	}

	T* temp = new T[size_ - 1];
	for (int i = 0; i < index; i++) {
		temp[i] = data[i];
	}

	for (int j = index + 1; j < size_; j++) {
		temp[j - 1] = data[j];
	}

	size_--;
	delete[] data;
	data = temp;
}

template <typename T>
Iterator<T> BetterArray<T>::begin() {
   return Iterator<T>(data);
}

template <typename T>
Iterator<T> BetterArray<T>::end() {
   return Iterator<T>(data + size_);
}

#endif
