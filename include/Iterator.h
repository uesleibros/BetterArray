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

#ifndef ITERATOR_H
#define ITERATOR_H

template<typename T>
class Iterator {
private:
   T* ptr;
public:
   Iterator(T* ptr) : ptr(ptr) {};
   Iterator& operator++() {
     ptr++;
     return *this;
   }
   bool operator!=(const Iterator<T>& other) const {
     return ptr != other.ptr;
   }
   T& operator*() {
     return *ptr;
   }
};

#endif
