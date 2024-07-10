#include "main.h"

/**
 * int factorial(int n);
 * @n: Interger whose factorial is returned
 *
 * Return: Factorial of the number. -1 IF N Less than 0.
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
		return n * factorial(n - 1);
	}
}
