#include "main.h"

/**
 * print_chessboard - print an array in the 8x8 chess form
 * @a: the array
 * Return: is void
 */
void print_chessboard(char (*a)[8])
{
	int row = 0, column = 0;

	while (row < 8)
	{
		column = 0;
		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}
		_putchar('\n');
		row++;
	}
}
