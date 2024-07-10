#include "main.h"

/**
 * is_prime_number -function that checks prime number.
 * @n : number to be checked if prime or not.
 * @i: The current divisor being tested.
 *
 * Return: Returns 1 if prime ,0 if not.
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
