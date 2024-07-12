#include <stdio.h>

/**
 * main - prints name of the program.
 * @argc: Is number of command line arguments.
 * @argv: An array containing the program command line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	/* supresses unused parameter, */
	
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

