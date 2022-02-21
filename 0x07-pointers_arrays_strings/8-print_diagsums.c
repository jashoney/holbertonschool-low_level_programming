#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of ints
 * @a: the matrix
 * @size: the size of each side of the matrix
 * Return:
 */
void print_diagsums(int *a, int size)
{
	unsigned int tb = 0, bt = 0;
	int row = 0, column, revcolumn, rowproduct;

	while (row < size)
	{
		column = row;
		revcolumn = size - 1 - row;
		rowproduct = row * size;
		tb = tb + *(a + rowproduct + column);
		bt = bt + *(a + rowproduct + revcolumn);
		row++;
	}
	printf("%d, %d\n", tb, bt);
}


