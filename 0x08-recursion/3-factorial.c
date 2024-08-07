#include "main.h"

/**
 * factorial - Function returns factorial of a given number.
 * @n: Interger whose factorial is returned
 *
 * Return: Factorial of the number. -1 if n is :Less than 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
