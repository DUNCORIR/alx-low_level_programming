#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range -Function that creates array of integers.
 * @max: The max range of array.
 * @min: The min range of array.
 *
 * Return: If min > max, return NULL and if malloc fails,return NULL.
 * Otherwise,return a pointer to newly created array.
 */
int *array_range(int min, int max)
{
	int i;
	int size_of_array;
	int *ptr;
	
	if (min > max)
	{
		return (NULL);
	}
	
	/* Calculating size of array */
	size_of_array = max - min + 1;

	/* allocating memory to the array as per size */
	ptr = malloc(size_of_array * sizeof(int));
	
	/* Allocation failure check */
	if (ptr == NULL)
	{
		return (NULL);
	}
	
	/* Filling the array using loop */
	for (i = 0; i < size_of_array; i++)
	{
		ptr[i] = min + i;
	}
	
	/* pointer to created array */
	return (ptr);
}
