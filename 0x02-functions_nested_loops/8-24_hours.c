#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hourn;
	int minuten;

	for (hourn = 0; hourn <= 24; hourn++)
	{
		for (minuten = 00; minuten <= 59; minuten++)
		{
			_putchar((hourn / 10) + '0');
			_putchar((hourn % 10) + '0');
			_putchar(':');
			_putchar((minuten / 10) + '0');
			_putchar((minuten % 10) + '0');
			_putchar('\n');
		}
	}
}
