#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - checks whether a string represents a positive number.
 * @str: string to be checked.
 *
 * Return: 1 if true, 0 if false
 */

int is_positive_number(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Adds positive numbers
 * @argc: Is the number of command line arguments
 * @argv: The array containing the program command line arguments
 *
 * Return: 0 if successful, 1 for errors
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

