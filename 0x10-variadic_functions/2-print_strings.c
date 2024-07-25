#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings: Function that prints strings.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed through the function.
 *
 * Description: The function prints strings and if separator 
 * is NULL,don't print it.If one of the string is NULL,
 * print (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	
	
	/* initialize argument list */
	va_start(args, n);
	
	
	/* iterate through the string */
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		
		
		if (str == NULL)
		{
		 	printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		
		
		/* Checks if separator is NULL) */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	
	
	/* Ends argument list */
	va_end(args);
	
	
	/* Return string */
	printf("\n");
}
