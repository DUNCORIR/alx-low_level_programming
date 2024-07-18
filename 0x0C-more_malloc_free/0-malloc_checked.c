#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Function that allocates memory using malloc.
 *
 * @b: Pointer to allocated memory
 *
 * Return: A pointer to allocated memory,otherwise malloc_checked
 * function cause normal process termination with status of 98.
 */
void *malloc_checked(unsigned int b)
{	
	void *malloc_checked = malloc(b);
	
	if (malloc_checked == NULL)
	{
		exit(98);
	}

	return (malloc_checked);
}
