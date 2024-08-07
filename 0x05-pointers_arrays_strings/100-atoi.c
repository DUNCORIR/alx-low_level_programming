#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer
 * @s: pointer to the string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int found_digit = 0;
int max_div_10 = INT_MAX / 10;

/*while statement lets us iterate the string*/
while (*s)
{
/*Checks '-' sign and adjust the sign accordingly*/
if (*s == '-')
{
sign *= -1;
}
/*checks for '+' sign which needs no adjustments in sign*/
else if (*s == '+')
{
/*skip*/
}
/*Convert the character to a digit and add it to the result*/
else if (*s >= '0' && *s <= '9')
{
found_digit = 1;

if (result > max_div_10 || (result == max_div_10 && (*s - '0') > (INT_MAX % 10)))
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}
result = result * 10 + (*s - '0');
}
/*Break the loop for digit found which the current character is non-numeric*/
else if (found_digit)
{
break;
}
/*Move to the next character*/
s++;
}
return (result *sign);
}

