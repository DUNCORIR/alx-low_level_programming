#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times, in lowercase, 
 * proceded  by a new line.
 * Description: Function prints the alphabet in lowercase 10 times,
 * employing _putchar only twice.
 */
void print_alphabet_x10(void)

{

char alphabet[275];
/*26 alphabet letters 10 times in 10 lines*/
int i, j, index = 0;

for (i = 0; i < 10; i++)
{

for (j = 'a'; j <= 'z'; j++)
{
alphabet[index++] = j;
}
alphabet[index++] = '\n';
}
for (i = 0; i < index; i++)
{
_putchar(alphabet[i]);
}
}
