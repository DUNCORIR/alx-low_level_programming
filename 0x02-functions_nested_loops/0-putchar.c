#include "main.h"
 /**
 *main.h -custom header file has the prototype for the _putchar function
 *Return: Always 0 (Success)
 */

int main(void)
/*main - entry point of program */
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
