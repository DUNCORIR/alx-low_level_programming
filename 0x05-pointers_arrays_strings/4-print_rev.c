#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: Pointer to the string to be printed
 *
 * Description: Function calculates the length of the string
 *              and then prints the characters in reverse order.
 *              It finally prints a new line character.
 */
void print_rev(char *s)
{
int length = 0;
int i;

/*Calculates length of the string*/
while (s[length] != '\0')
{
length++;
}
/*Prints string in reverse*/
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
/*Prints new line character*/
_putchar('\n');
}
