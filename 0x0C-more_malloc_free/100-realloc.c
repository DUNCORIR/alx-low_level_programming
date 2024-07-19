#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *_realloc - Function that reallocates memory using malloc and free.
 * @old_size: Size in bytes of allocated space for pointer ptr.
 * @new_size: New size in bytes of new memory block.
 * @ptr:Pointer to the memory previously allocated.
 *
 * Return: ptr if new_size equals old_size,if new_size is equal to zero,
 * and ptr is not NULL,return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nwptr;
	/* compares old and new memory sizes */
	if (new_size == old_size)
	{
		return (ptr);
	}
	
	if (ptr == NULL)
	{
		return malloc(new_size);
	}
	
	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	/* Reallocate memory block to other cases */
	nwptr =realloc(ptr, new_size);
	
	if (nwptr == NULL)
	{
		return (NULL);
	}
	
	return (nwptr);
}
