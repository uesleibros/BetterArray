#ifndef BETTER_ARRAY_HPP
#define BETTER_ARRAY_HPP

#include "Iterator.hpp"

template <typename T>
class BetterArray {
private:
	T* data;
	int size_;
public:
	BetterArray() : data(nullptr), size_(0) {};
	~BetterArray();

	T& operator[](int index);

	int get_size();
	void add(const T& value);
	void remove(int index);

	Iterator<T> begin();
 	Iterator<T> end();
};

#include "implements/BetterArray.inl"
#endif