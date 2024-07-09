#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -To search a string for any sets of bytes.
 * @s: The string to be searched
 * @accept: Set of bytes to be searched.
 *
 * Return: Pointer to bytes in s that matyches one of the bytes 
 * in accept.NULL if none is found.
 */
char *_strpbrk(char *s, char *accept)
{
	/* iterates thro' each char in s */
	while (*s != '\0')
	{
		/* checks each byte in accept */
		char *a = accept;
		while (*a != '\0')
		{
			/* if match is found, return pointer to byte in s */
			if (*s == *a)
			{
				return s;
			}
			a++;
		}
		s++;
	}
	/* returns NULL if no match of byte is found */
	return NULL;
}
