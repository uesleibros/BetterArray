//    _                     
//   /_\  _ _ _ _ __ _ _  _   _____________________________________________
//  / _ \| '_| '_/ _` | || |  & A better array for C++                    &
// /_/ \_\_| |_| \__,_|\_, |  & version 1.0                               &
//                     |__/   & https://github.com/uesleibros/BetterArray &
/****************************************************************************\
* Test *
\****************************************************************************/

#ifndef BETTER_ARRAY_H
#define BETTER_ARRAY_H

#include "Iterator.h"

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
