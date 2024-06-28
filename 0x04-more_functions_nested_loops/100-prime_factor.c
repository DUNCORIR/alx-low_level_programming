#include <stdio.h>

/*
 *Main - Entry point
 * Function prototype for finding the largest prime factor.
 * Return max_factor - Return the largest prime factor
 * */
long largest_prime_factor(long n);

int main(void)
{
long number = 612852475143; 
long result = largest_prime_factor(number);
/*Call the function and store the result.*/

printf("%ld\n", result);
/*Print the largest prime factor.*/
return 0;

}

/*Function to find the largest prime factor of a given number.*/
long largest_prime_factor(long n)
{
long i;
long max_factor = -1;

/*Variable to store the largest prime factor, initialized to -1.*/
while (n % 2 == 0)
{

max_factor = 2;
n /= 2;

}

/*Divide out other prime factors (odd numbers)*/

for (i = 3; i * i <= n; i += 2)

{
while (n % i == 0)
{
max_factor = i;
n /= i;
}
}

if (n > 2)
{
max_factor = n;
}
return max_factor;
}


