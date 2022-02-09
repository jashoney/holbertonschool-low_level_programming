#include "main.h"

/**
 * print_square - prints a square of #, n rows wide and deep
 * @size: the depth and width of the square
 * Return: is void
 */
void print_square(int size)
{
	int height = 1;
	int width;

	if (size > 0)
	{
		while (height <= size)
		{
			width = 1;
			while (width <= size)
			{
				_putchar(35);
				width++;
			}
			_putchar('\n');
			height++;
		}
	}
	else
		_putchar('\n');
}
