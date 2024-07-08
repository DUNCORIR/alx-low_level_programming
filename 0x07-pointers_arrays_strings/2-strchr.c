#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to be searched
 * @c: Character to be located in string
 *
 * Return: pointer to the first occurence of the char c 
 * in str or NULL if char is not found
 */
char *_strchr(char *s, char c)
{
	/* iterates thro' string for not equals to NULL */
	while (*s != '\0')
	{
		/* Checks if current characteristic matches c */
		if (*s == c)
		{
		/* Returns pointer to thr first occurence of c */
			return (s);
		}
		s++;
	}
	/* checks the null terminator char */
	if (*s == c)
	{
	/* Returns terminator to null terminator of c if c is '\0' */
	return (s);
	}
	/* Returns NULL if c is not found in the string */
	return (NULL);
}
