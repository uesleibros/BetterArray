#ifndef MEMORY_H
#define MEMORY_H
	void safe_free(void* ptr);
	void* safe_malloc(size_t size);
	void* safe_realloc(void* ptr, size_t size);

	#include "Memory.c"
#endif
