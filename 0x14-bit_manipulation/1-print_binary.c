#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary of a number.
 * @n: The number to be printed in binary.
 *
 * Description: This function prints the binary representation of a number.
 */
void print_binary(unsigned long int n)
{
	int bit_shift;
	int start;

	start = 0;
	/* Starting from most signifant bit .*/
	for (bit_shift = sizeof(n) * 8 - 1; bit_shift >= 0; bit_shift--)
	{
		/* bir extract at current position */
		if (n & (1UL << bit_shift))
		{
			putchar('1');
			start = 1;
		}
		else if (start)
		{
			putchar('0');
		}
	}

	/* for n = 0, print '0'*/
	if (!start)
	{
		putchar('0');
	}
}
