#include "main.h"

/**
 * print_triangle - prints a triangle of # chars, size lines deep and wide
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int depth;
	int spaces;
	int hashs;

	if (size > 0)
	{
		depth = 1;
		while (depth <= size)
		{
			spaces = size - depth;
			hashs = size - spaces;
			while (spaces > 0)
			{
				_putchar(32);
				spaces--;
			}
			while (hashs > 0)
			{
				_putchar(35);
				hashs--;
			}
			_putchar('\n');
			depth++;
		}
	}
	else
		_putchar('\n');
}
