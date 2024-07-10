#include "main.h"
/**
 * _puts_recursion -Function that prints each single character of a string.
 * @s: Points to character in the string.
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	/* Base case if end of string is reached */
	if (*s == '\0')
	{
		/* Prints new line character */
		_putchar('\n');
		return;
	}
	/* Prints current character */
	_putchar(*s);
	/* Recursively calls function with next character */
	_puts_recursion(s + 1);
}

