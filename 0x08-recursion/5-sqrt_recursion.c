#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * _sqrt_helper - Helper function to find the square root.
 * @n: The number to find the square root of.
 * @i: The current number to test as the potential square root.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

