#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function multiplies two numbers.
 * @argc: Is the number of command line arguments.
 * @argv: The array containing the program command line arguments.
 *
 * Return: 0 if successful, 1 if number of arguments is incorrect.
 */

int main(int argc, char *argv[])
{
	 int num1, num2, result;
	/* Loop condition */
	 if (argc != 3)
	{
		 printf("Error\n");
		 return (1);
	}
	 num1 = atoi(argv[1]);
	 num2 = atoi(argv[2]);
	 result = num1 * num2;

	 printf("%d\n", result);

	 return (0);
}
