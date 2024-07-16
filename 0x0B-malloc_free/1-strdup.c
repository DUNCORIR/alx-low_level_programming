#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns pointer to new string which is duplicate of string str.
 * @str: duplicated string.
 *
 * Return: NULL if str = NULL if insufficient memory and pointer
 * to duplicated string on success
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int length, i;
	/* checks if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	/* Determines length of teh input string */
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	/* Allocates memory for new string plus the null terminator */
	copy = malloc((length + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	/* copying input string to newly allocated memory */
	for (i = 0; i < length; i++)
	{
		copy[i] = str[i];
	}
	copy[length] = '\0';
	/* Return a pointer to newly allocated memeory */
	return (copy);
}
