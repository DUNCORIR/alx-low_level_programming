#include "main.h"

/*
 * Main :Entry point
 * _strcat - Concatenates two strings
 * @dest: Destination string to which the source string is appended
 * @src: Source string to be appended to the destination string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, const char *src)
{
char *ptr = dest;
/*Moves pointer to the end of the destination string*/
while (*ptr != '\0')
{
ptr++;
}
/*Appends source string to the destination string*/
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
/*to add terminating null byte*/
*ptr = '\0';
/*returns the destination string*/
return (dest);
}
