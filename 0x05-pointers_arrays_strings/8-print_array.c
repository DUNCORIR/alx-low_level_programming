#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers;a new line follow
 * @a: Pointer to the array of integers
 * @n: Number of elements to print
 *
 * Description: This function prints the first n elements of the array a,
 * separated by a comma and a space, followed by a new line.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
