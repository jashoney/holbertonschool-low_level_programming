#include "main.h"

/**
 * print_alphabet_x10 - print the lower case alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int lettercount;
	int loopcount = 1;

	while (loopcount <= 10)
	{
		for (lettercount = 'a'; lettercount <= 'z'; lettercount++)
			_putchar(lettercount);
		_putchar('\n');
		loopcount++;
	}
}
