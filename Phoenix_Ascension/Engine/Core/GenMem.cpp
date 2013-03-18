#include "GenMem.h"

#include <memory.h>
#include <string.h>

void* ASC::mem_cpy(void* dest, const void* src, size_t length)
{
	return memcpy(dest, src, length);
}

void* ASC::mem_move(void* dest, const void* src, size_t length)
{
	return memmove(dest, src, length);
}