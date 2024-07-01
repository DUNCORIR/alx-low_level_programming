#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Description: This function calculates the length of the string
 *              pointed to by s, excluding the null terminator.
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return length;
}

