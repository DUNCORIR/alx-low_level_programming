#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: Pointer to the string to be printed
 *
 * Description: This function iterates through the string pointed
 *              to by str and prints each character using _putchar.
 *              It then prints a new line character.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
