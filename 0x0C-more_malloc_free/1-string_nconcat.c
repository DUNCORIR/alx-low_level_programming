#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: Pointer to dest
 * @s2: Pointer to src
 *
 * Return: NULL if it fails ,if NULL passed treat as empty string
 * otherwise pointer with s1,s2 and null terminator.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, len_total;
	unsigned int i, j;
	char *res;
	
	/* NULL input handler */
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	
	/* Use s2 if n >=s2 */
	if (n >= len_s2)
		n = len_s2;
	/* total length of string after concatenation */
	len_total = len_s1 + n + 1;
	/* allocates memory step */
	res = malloc(len_total);
	if (res == NULL)
		return (NULL);
	/*copy n bytes of s1 to result */
	for (i = 0; i < len_s1; i++)
		res[i] = s1[i];
	for (j = 0; j < len_s2; j++)
		res[i + j] = s2[j];
	/*add null terminator \0 */
	res[i + j] = '\0';
	
	return (res);
}
