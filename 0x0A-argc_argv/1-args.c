#include <stdio.h>

/**
 * main - prints number of arguments passed into it.
 * @argv: array containing the program command line arguments
 * @argc: number of command line arguments.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return 0;
}

