#include "main.h"
#include <stdio.h>

/**
 * prints_diagsum - prints the sum of two diagonals of a square matrix
 * @a: Pointer to the square matrix of integers.
 * @size: is the size of square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	
	/* calculates sum of main diagonal */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	/* calculates sum of secondary diagonal */
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1- i)];
	}
	/* prints the sums */
	printf( "%d,%d\n", sum1 ,sum2);
}
