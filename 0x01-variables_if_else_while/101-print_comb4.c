#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{

int i, j, k;
for (i = 0; i < 10; i++)

{

for (j = i + 1; j < 10; j++)

{

for (k = j + 1; k <10 ; k++)

{

/*converts the integer i to its corresponding ASCII character and prints it.*/
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');

if (i != 8 || j != 9)
/*If the combination is not the last one,prints a comma and a space.*/
{

putchar (',');
putchar (' ');

}
}
}
}
putchar('\n');
return (0);

}
