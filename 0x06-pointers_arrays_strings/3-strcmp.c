#include "main.h"

/* _strcmp - Compares the two strings
 *
 * @s1:First string
 * @s2: second string
 *
 * Return: An integer <=>0 if s1 is found resp,to be <, match or be > s2.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return *(unsigned char *)s1 - *(unsigned char *)s2;
}

