#include "main.h"

/**
 * print_number - Prints an integer
 * @integer to be printed
 */

void print_number(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
        
	/* Recursively prints digits */
	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
