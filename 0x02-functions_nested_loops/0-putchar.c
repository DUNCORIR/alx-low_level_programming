#include "main.h"
 /**
 * main.h -custom header file has the prototype for the _putchar function
 * Description: A program that prints _putchar, followed by a new line.
 * main - entry point of program
 * Return: Always 0 (Success)
 */

int main(void)

{
int i;
char str[] = "_putchar\n";

for (i = 0; str[i] != '\0'; i++)

{

_putchar(str[i]);
/*function is called to print each character of the string.*/
}
/*main function returns 0, indicates that the program executed successfully.*/
return (0);
}
