#include <stdio.h>
#include <stdlib.h>

/** 
 * main - Prints the opcodes of its own main function.
 * @argc: Number of arguments.
 * @argv: Array of arguments
 *
 * Return: Return 0 on succes, 2 if number of bytes is
 * -ve and 1 if argument number is incorect.
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	int i;
	unsigned char* m_ptr;

	/* Check number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Converts argument to interger using atoi */
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Get address of main function using m_ptr */
	m_ptr = (unsigned char*) main;

	/* iterate and Print the opcodes */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", m_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}

	/* print a new line */
	printf("\n");

	return (0);
}
