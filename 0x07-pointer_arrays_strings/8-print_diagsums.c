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
	unsigned int td = 0, bu = 0;
	int row = 0, column, revcolumn, rowproduct;

	while (row < size)
	{
		column = row;
		revcolumn = size - 1 - row;
		rowproduct = row * size;
		td = td + *(a + rowproduct + column);
		bu = bu + *(a + rowproduct + revcolumn);
		row++;
	}
	printf("%u, %u\n", td, bu);
}


