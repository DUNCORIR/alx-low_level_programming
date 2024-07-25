#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print-numbers - Function that prints numbers.
 * @separator: The string to be printed between numbers.
 * @n: Number of integers passed through the function.
 *
 * Description: Function prints numbers and if separator 
 * is NULL,it does not print it.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;
	
	/*Initialize the argument list */
	va_start(args, n);
	
	
	/* Iterating through the numbers */
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		
		
		/* checks separator in numbers */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	
	/* Clean up the argument list */
	va_end(args);
	
	/* Printing a new line */
	printf ("\n");
}
