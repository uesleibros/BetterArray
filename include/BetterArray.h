//    _                     
//   /_\  _ _ _ _ __ _ _  _   _____________________________________________
//  / _ \| '_| '_/ _` | || |  & A better array for C++                    &
// /_/ \_\_| |_| \__,_|\_, |  & version 1.2                               &
//                     |__/   & https://github.com/uesleibros/BetterArray &
/**************************************************************************\
+ License: MIT                                                             -
+ Open-Source                                                              -
+ Made with ♥️ for you.                                                     -
\**************************************************************************/

#ifndef BETTER_ARRAY_H
#define BETTER_ARRAY_H

#include <initializer_list>

template <typename T>
class Array {
private:
	T* data;
	int size_;
public:
	class Iterator {
		private:
		T* ptr;

		public:
			Iterator(T* ptr) : ptr(ptr) {}
			Iterator(const Iterator& other) : ptr(other.ptr) {}

			Iterator& operator++() {
			   ++ptr;
			   return *this;
			}

			bool operator!=(const Iterator& it) const {
			   return ptr != it.ptr;
			}

			T& operator*() {
			   return *ptr;
			}
   };

	Array() : data(nullptr), size_(0) {};
	~Array();

	T& operator[](int index);

	int get_size();
	void add(const T& value);
	void append(const Array<T>& other);
   void append(std::initializer_list<T> ilist);
	void remove(int index);

	typename Array<T>::Iterator begin();
 	typename Array<T>::Iterator end();
};

#include "../src/implements/Array.inl"
#include "../src/implements/Iterator.inl"
#include "Multidimensional.h"

#endif
