#include "main.h"
#include <limits.h>

/**
 * set_bit - Function that sets the value of a bit 1 at a given index.
 * @n:The pointer to the number to be modified.
 * @index: The index starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked,or -1 if an eror occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* checks if the index is within valid range for unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/* sets the bit at a specified index to 1 */
	*n |= (1UL << index);

	return (1);
}
