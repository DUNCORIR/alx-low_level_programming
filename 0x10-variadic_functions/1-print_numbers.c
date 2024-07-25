#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print-number - Function that prints numbers.
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
	
	/*initialize the argument list */
	va_start(args, n);
		
	
	/* iterating through the numbers */
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
	
	/* clean the argument list */
	va_end(args);
	
	/* printing a new line */
	printf ("\n");
}
