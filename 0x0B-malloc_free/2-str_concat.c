#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to newly allocared space that contains s1
 * followed by s2 and NULL terminated.
 * Return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j, length1, length2, total_length;

	/* check if string is empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* calculates strength of both strings */
	length1 = 0;
	while (s1[length1] != '\0')
		length1++;

	length2 = 0;
	while (s2[length2] != '\0')
		length2++;
	/* Allocates memeory for new string */
	total_length = length1 + length2 + 1;
	result = malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);
	/* copys s1 into result */
	for (i = 0; i < length1; i++)
		result[i] = s1[i];
	/* copys s2 into result */
	for (j = 0; j < length2; j++)
		result[length1 + j] = s2[j];
	/* null terminating the new string */
	result[total_length -1] = '\0';

	return (result);
}
