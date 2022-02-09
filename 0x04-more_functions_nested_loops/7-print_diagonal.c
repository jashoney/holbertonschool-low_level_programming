#include "main.h"

/**
 * print_diagonal - prints a diagonal line of \ chars, n lines deep and wide
 * @n: length of printed line
 * Return: void
 */
void print_diagonal(int n)
{
	int depth;
	int spacecount;
	int printspace;

	if (n > 0)
	{
		depth = 1;
		while (depth <= n)
		{
			if (depth > 1)
			{
				spacecount = depth - 1;
				printspace = 1;
				while (printspace <= spacecount)
				{
					_putchar(32);
					printspace++;
				}
			}
			_putchar(92);
			_putchar('\n');
			depth++;
		}
	}
	else
		_putchar('\n');
}
