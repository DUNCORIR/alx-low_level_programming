#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Function that converts a binary to an unsigned int.
 * @b: The pointer to the string of 0 and 1 chars.
 *
 * Return: The converted number or 0 if b is NULL,there is
 * one or more chars in the string b  that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num = 0;

	/* checking NULL binary */
	if (b == NULL)
		return (0);

	/*Traversing the binary string */
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (num << 1) | (*b - '0');
		b++;
	}

	/* return converted number */
	return (num);
}
