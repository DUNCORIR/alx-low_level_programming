#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @index: The index,starting from 0 of the bit you want to get.
 * @n: The number to search.
 *
 * Return: The value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* checks if index is within bounds of unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/* shifts bit at index to least significant bit and mask it with 1*/
	return ((n & (1UL << index)) ? 1 : 0);
}
