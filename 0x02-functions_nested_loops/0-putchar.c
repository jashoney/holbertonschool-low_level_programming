#include "main.h"

/**
 * main - this function prints the string "_putchar"
 *
 * Return: returns zero
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
