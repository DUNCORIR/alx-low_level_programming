#include "function_pointers.h"

/**
 * int_index - Returns the index of the first element used
 * to compare values.
 *
 * @size: The number of elements in the array 'array'.
 * @cmp: The pointer to the function used to compare values.
 * @array: Points to the array of integers.
 *
 *
 * Return: Returns the index of the first element
 * for which cmp function does not return 0,
 * otherwise return -1.if size <=0,return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	/*checks validity of array and comparison function  */
	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	
	/* Then iterates over array */
	for (i = 0; i < size; i++)
	{
		/* comparing arrays using function */
		if (cmp(array[i]) != 0)
		{
			/* Return the index of first match */
			return (i);
		}
	}
	
	/* if no match is found */
	return (-1);
}
