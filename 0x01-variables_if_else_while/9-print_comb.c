#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: 0 if successful
 */
int main(void)
{

int i;

for (i = 0; i < 10; i++)

{

putchar('0' + i);
if (i != 9)

{

putchar(',');

putchar(' ');

}

}

putchar('\n');

return (0);
}

