#include "main.h"
#include <limits.h>

/**
 * clear_bit - Function that sets the value of a bit 0 at a given index.
 * @n: The pointer to the number to be modified.
 * @index: The index starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked,or -1 if an error occcured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* check whether index is within range of bits */
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* For index out of range */
		return (-1);
	}

	/* creates mask with 0 at bit position and 1s elsewhere.*/
	mask = 1UL << index;
	/* use bitwise AND with compliment of the mask to clear the bit */
	*n &= mask;

	/*success*/
	return (1);
}
