#include "main.h"
#include <limits.h>

/**
 * flip_bits - Function that returns the number of bits needed
 * to flip from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	/*XOR the numbers to get differing bit */
	xor_result = n ^ m;
	count = 0;

	/*counts number of 1s in the result */
	while (xor_result > 0)
	{
		/* increment count if the least significant bit = 0 */
		count = count + (xor_result & 1);
		/*shift right to process the next bit */
		xor_result >>= 1;
	}

	return (count);
}
