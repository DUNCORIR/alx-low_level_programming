#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string to which the source string is appended
 * @src: Source string to be appended to the destination string
 *  @n: Maximum number of bytes to be appended from src
 *
 *  Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
/*moves pointer to the end of the destination string*/
while (*ptr != '\0')
{
ptr++;
}
/*appends source string to the destination string;using n bytes*/
while (n > 0 && *src != '\0')
{

*ptr = *src;
ptr++;
src++;
n--;

}
/*adds terminating*/
*ptr = '\0';
return (dest);
}
