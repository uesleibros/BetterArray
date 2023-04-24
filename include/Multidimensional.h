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

#ifndef BETTER_ARRAY_MULTIDIMENSIONAL_H
#define BETTER_ARRAY_MULTIDIMENSIONAL_H

#include <vector>
#include "BetterArray.h"

template <typename T>
class ArrayMulti {
private:
   std::vector<Array<T>> data;

public:
	ArrayMulti() {}

	Array<T>& operator[](int index) {
	  if (index >= static_cast<size_t>(data.size())) {
	      data.resize(index + 1);
	  }
	  return data[index];
	}
};

#endif
