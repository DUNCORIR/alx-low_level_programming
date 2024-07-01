#include "main.h"

/**
 * reverse_string - Reverses a string
 * @s: Pointer to the string to be reversed
 *
 * Description: This function reverses the string pointed to by s.
 */
void rev_string(char *s)
{
int length = 0;
int i;
char temp;

/*Calculate the length of the string*/
while (s[length] != '\0')
{
length++;
}

/*Reverse the string in place*/
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i -1] = temp;
}
}
