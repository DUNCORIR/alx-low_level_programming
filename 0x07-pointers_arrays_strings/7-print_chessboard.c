#include "main.h"

/**
 * print_chessboard - function to print chessboard
 * @a: represents a 2D array of a chessboard with 8 rows 8 coumns.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i , j;
	/* iterates through row i */
	for (i = 0; i < 8; i++)
	{    
	        /* iterates through j columns */
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		/* prints next line */
		_putchar('\n');
	}

}
