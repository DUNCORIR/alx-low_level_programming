#include "function_pointers.h"

/**
 * array_iterator - Eexecutes a function given 
 * as a parameter on each element of an array.
 *
 * @array: pointer to the array of integers.
 * @size: size of array or number of elements.
 * @action: pointer to the function that takes int as argument
 * and returns nothing.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	/* checking validity of array */
	if (array == NULL || action == NULL)
	{
		return;
	}
	
	/* Looping through the array */
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
