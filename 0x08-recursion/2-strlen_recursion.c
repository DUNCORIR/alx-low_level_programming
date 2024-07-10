#include "main.h"
/**
 * _strlen_recursion -Funtion that returns length of a string.
 * @s: Points to the string whose length is returned.
 *
 * Return : Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	return 1 + _strlen_recursion(s + 1);
}
