#include "main.h"
/**
 * _strncpy - Copies up to n characters from *src to *dest strings
 * @dest: Destination string
 * @src:Source string
 * @n: Max no of characters to copy
 *
 * Return: Returned pointer to dest string
 * */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;

/*copy upto n characters from src to dest*/
while (n > 0 && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
n--;
}

/*pad rem spaces with \0 null bytes if need be*/
while (n > 0)
{
*ptr = '\0';
ptr++;
n--;
}
return (dest);
}

