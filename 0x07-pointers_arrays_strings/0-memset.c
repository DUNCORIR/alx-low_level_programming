#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory area with.
 * @n: The number of bytes to be filled with the constant byte.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* Loops over the mem area then sets each byte to the constant byte b */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	/* returns pointer to the memory area */
	return (s);
}
