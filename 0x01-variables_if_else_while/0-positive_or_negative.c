#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * Program asigns a random number to the variable `n`
 * each time it is executed, and prints whether the number is positive,
 * negative, or zero.
 */
int main(void)
{
/*Seed the random number generator with the current time*/
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{

printf("%d is positive\n", n);

}
else if (n < 0)
{

printf("%d is negative\n", n);

}
else
{

printf("%d is zero\n", n);

}

return (0);

}
