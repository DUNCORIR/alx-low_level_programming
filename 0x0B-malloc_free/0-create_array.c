#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create array
 * @size: Size of array
 * @c: Character to initialize the array with
 *
 * Return: A pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
