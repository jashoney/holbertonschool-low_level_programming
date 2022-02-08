#include "main.h"

/**
 * main - check the code
 *
 * Return: always return void
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
