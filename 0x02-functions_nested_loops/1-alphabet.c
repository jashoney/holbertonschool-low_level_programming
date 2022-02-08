#include "main.h"

/**
 * print_alphabet - print the lower case alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int lettercount = 'a';

	while (lettercount <= 'z')
	{
		_putchar(lettercount);
		lettercount++;
	}
	_putchar('\n');
}
