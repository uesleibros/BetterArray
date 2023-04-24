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

#ifndef MEMORY_H
#define MEMORY_H
	void safe_free(void* ptr);
	void* safe_malloc(size_t size);
	void* safe_realloc(void* ptr, size_t size);

	#include "Memory.c"
#endif
