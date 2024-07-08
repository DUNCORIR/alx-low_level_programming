#include "main.h"
/**
 * _memcpy - Function that copies memory
 * @char *dest -where memory will be copied to
 * @char *src - where meme is from
 *
 * Return dest - destination copied to.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
