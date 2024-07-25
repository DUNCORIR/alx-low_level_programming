#include "variadic_functions.h"

/**
 * sum_them_all -Function that returns sum of its parameters.
 * @n: Number of parameters through the function.
 *
 * Description: the function takes a variable number of arguments
 * then return their sum.If n == 0, return 0
 *
 * Return: The sum of number of argument parameters, 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;
	
	/* checks the parameter count */
	if (n == 0)
		return (0);
	
	/* Initializing argument list */
	va_start(args, n);
	
	/* iterate the arguments and summation */
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	
	/* cleans up the argument list */
	va_end(args);
	
	return (sum);
}
