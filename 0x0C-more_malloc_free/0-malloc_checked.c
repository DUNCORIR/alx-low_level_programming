#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Function that allocates memory using malloc.
 *
 * @b: Allocated memory
 *
 * Return: A pointer to allocated memory,otherwise malloc_checked
 * function cause normal process termination with status of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *malloc_checked = malloc(b);
	/* checks allocation status */
	if (malloc_checked == NULL)
	{
		/* exit value on termination */
		exit(98);
	}
	/* Pointer that is returned.*/
	return (malloc_checked);
}
