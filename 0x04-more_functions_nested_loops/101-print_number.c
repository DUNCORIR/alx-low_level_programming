#include "main.h"
/**
 * print_number - Prints an integer using _putchar function only.
 * main - Entry point 
 * @n: The integer to be printed.
 */

void print_number(int n)

{
/* Handle negative numbers */
if (n < 0) 
{
_putchar('-');
n = -n;

}
if (n == 0)
{
_putchar('0');
return;
}
/*Recursive call to handle digits from left to right*/
if (n / 10 != 0)
{
print_number(n / 10); 

}
_putchar(n % 10 + '0');
/* Print each digit by converting it to character.*/

}
