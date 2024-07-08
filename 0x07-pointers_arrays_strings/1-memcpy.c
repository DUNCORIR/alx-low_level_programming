#include "main.h"
/**
 * _memcpy - Function that copies memory
 * @dest -where memory will be copied to
 * @src - where mem is from
 * @n: Number of bytes to copy
 *
 * Return dest - A pointer to the destination memory area `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Loop over the source memory area and copy each byte to destination */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	/* Return pointer to the destination memory area */
	return (dest);
}
