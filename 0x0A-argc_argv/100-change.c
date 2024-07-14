#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins to make change for any amount of money.
 * @argc: The number of command line arguments.
 * @argv; The array contained in program line arguments.
 *
 * Return: 1 for errors and 0 if successful.
 */
int main(int argc, char *argv[])
{
	/* Initializes cents ,denominations and iterative counts for loops */
	int cents, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	/* checks for command line arguments count */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* Converts strings to number integer counts */
	cents = atoi(argv[1]);

	if (cents < 0)
	{
	/* Prints output for 1 */
		printf("0\n");
		return (0);
	}

	/* initializing, condition and increment */
	for (i = 0; i < 5; i++)
	{
		while (cents >= denominations[i])
		{
			cents -= denominations[i];
			coins++;
		}
	}
	/* Prints output for 0 */
	printf("%d\n", coins);
	return (0);
}
