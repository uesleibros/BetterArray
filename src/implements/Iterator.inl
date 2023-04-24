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

#ifndef BETTER_ARRAY_ITERATOR_INL
#define BETTER_ARRAY_ITERATOR_INL

template <typename T>
typename Array<T>::Iterator Array<T>::begin() {
   return Iterator(data);
}

template <typename T>
typename Array<T>::Iterator Array<T>::end() {
   return Iterator(data + size_);
}

#endif