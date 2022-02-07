#include "main.h"

/**
 * main - check the code
 *
 * Return - always 0
 */
int main(void)
{
	char sentence[9] = "_putchar\n";
	int count = 0;

	while (count <= 8)
	{
		_putchar(sentence[count]);
		count++;
	}
	return (0);
}
