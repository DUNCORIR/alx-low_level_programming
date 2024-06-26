#include "main.h"
/**
 * _islower - Checks if a character is lowercase .
 *
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
/* @c: The character to check.*/

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
