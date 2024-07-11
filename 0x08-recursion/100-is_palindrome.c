#include "main.h"
#include <string.h>
/**
 * check_palindrome - Function that checks if string is palindrome.
 * @start: The starting index of substring.
 * @end: The ending index of the substring.
 * @s: The string to check.
 *
 * Return: Returns 1 if string is palindrome and 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is palindrome.
 * @s: String to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	if (len == 0)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}
