#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: Pointer to the beginning of located substring,
 * and NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	/* if needle is empty, return haystack */
	if (*needle == '\0')
		
		return (haystack);
	/* iterates through haystack */
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		/* checks if substring matches */
	       while (*n != '\0' && *h == *n)
	       {
			h++;
	 		n++;
       	       }
	     /* if entire substring was found,returns the start of the substring */
	       if (*n == '\0')
		       return (haystack);
	       haystack++;
	}

	/* if substring is not found it returns NULL */
	return (NULL);
}
