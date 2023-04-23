#ifndef ITERATOR_HPP
#define ITERATOR_HPP

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