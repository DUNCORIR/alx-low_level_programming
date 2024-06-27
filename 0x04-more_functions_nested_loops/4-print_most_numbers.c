#include "main.h"

/* print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4.*/

void print_most_numbers(void)
{

char numbers[] = "01356789\n";
int i = 0;

while (numbers[i] != '\0')
{
_putchar(numbers[i]);
i++;

}
}
