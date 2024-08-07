#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Function that allocates memory for ana array using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to allocated memory, or NULL if size and nmemb is 0.
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

	/* allocation failure checked */
	if (allocated_memory == NULL)
	{
		return (NULL);
	}

	/* resets allocated memory to 0.*/
	memset(allocated_memory, 0, result_size);

	return (allocated_memory);
}
