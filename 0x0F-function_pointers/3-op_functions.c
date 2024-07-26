#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns sum of a and b
 * @a: integer a
 * @: integer b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b.
 * @: first integer.
 * @b: second integer.
 * Return: Difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns product of a and b.
 * @a: First integer.
 * @b: Second integer.
 * Return: Product of mul a and b .
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns result of division of a and b.
 * @: First integer.
 * @b: Second integer.
 * Return: Return of dividing a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns what remains of the division of a by b.
 * @a: First integer.
 * @b: Second integer.
 * Return: Remainder of division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
