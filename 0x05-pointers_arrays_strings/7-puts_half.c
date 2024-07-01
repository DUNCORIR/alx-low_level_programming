#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: Pointer to the string to be printed
 *
 * Description: the function should print the last n characters of the string
 * where n = (length_of_the_string - 1) / 2 + 1.
 * Otherwise, it prints from the midpoint to the end.
 */
void puts_half(char *str)
{
int length = 0;
int i, start;
/*Determine the starting point for printing*/
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2 + 1;
}
/*Print from the starting point to the end*/
for (i = start; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
