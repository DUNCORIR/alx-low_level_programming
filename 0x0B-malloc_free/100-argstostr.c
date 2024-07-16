#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of program.
 * @ac: No of argumenets,av
 * @av: Number of array of arguments
 *
 * Return: Pointer to new string, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int total_len = 0;
	int i, j;
	char *str;
	int pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculates total length required */
	for (i = 0; i < ac; i++)
	{
		/* +1 for new line character */

		total_len = total_len + strlen(av[i]) + 1;
	}

	/* Allocates mem for concatenated string */
	str = malloc((total_len + 1) * sizeof(char));
	/* +1 for null terminator */
	if (str == NULL)
	return (NULL);
	/* Concatenates arguments with newline characters */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[pos++] = av[i][j];
		}
		/* new line after each argument added */
		str[pos++] = '\n';
	}
	/* Adds terminating null byte */
	str[pos] = '\0';

	return (str);
}
