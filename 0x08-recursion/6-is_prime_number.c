#include "main.h"

/**
 * is_prime_number -function that checks prime number.
 * @n : number to be checked if prime or not.
 * @i: Is the current divisor being tested.
 * is_prime_helper - Helper function to check if a number is prime.
 *
 * Return: Returns 1 if prime ,0 if not.
 */
/* is_prime_helper - Helper function to check if a number is prime. */
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
