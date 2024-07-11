#include "main.h"

/**
 * wildcmp - Compares two strings then returns 1 if considered
 * identical ,otherwise 0.
 * @s1: First string.
 * @s2: Second string ,can contain special character '*' .
 *
 * Return: 1 if strings are identical ,0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* when at end of both strings,they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	/* if s2 contains '*' ,two cases to consider. */
	if (*s2 == '*')
	{
	/* moves to next character in s2 or skip current character in s1. */
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	/*if characters match, move to the next character in both strings */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	/* if characters do not match and s2 not '*' ,return 0. */
	return (0);
}
