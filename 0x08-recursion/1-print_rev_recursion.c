#include "main.h"
/**
 * _print_rev_recursion -Function that prints a string in reverse.
 * @s: Points to the string to be reversed.
 *
 * Return: Alaways 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
