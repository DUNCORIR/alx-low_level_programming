#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Function that allocates memory for ana array using malloc.
 * @nmemb: Number of elements.
 * @size: size of each element.
 *
 * Returns: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int result_size;
	void *allocated_memory;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Total memory allocated */
	result_size = nmemb * size;
	allocated_memory = malloc(result_size);
	
	if (allocated_memory == NULL)
	{
		return (NULL);
	}
	memset(allocated_memory, 0, result_size);
	return (allocated_memory);
}
