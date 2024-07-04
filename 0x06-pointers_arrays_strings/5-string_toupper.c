#include <ctype.h>

/*
 * Main: Check code
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The string to be converted.
 *
 * Return: The pointer to the string.
 */
char *string_toupper(char *str)
{
/*pointer that iterates though the string*/
char *ptr = str;
/*loop until end of string8*/
while (*ptr != '\0')
{
/*check if current character is lowercase*/
if (islower(*ptr))
{
/*converts to uppercase*/
*ptr = toupper(*ptr);
}
/*moves to next character*/
ptr++;
}
/*return modified string*/
return (str);
}
