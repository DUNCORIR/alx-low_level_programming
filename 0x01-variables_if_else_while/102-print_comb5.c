#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int i, j;

for (i = 0; i <= 98; i++)


{

for (j = i + 1; j <= 99; j++)

{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');

putchar((j % 10) + '0');
/* condition checks if the current pair is not the last pair (98 99).*/
if (i != 98 || j != 99)
{

putchar(',');
putchar(' ');

}
}
}

putchar('\n');
return (0);

}
