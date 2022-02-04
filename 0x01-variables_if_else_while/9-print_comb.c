#include <stdio.h>

/**
 * main - the main function short description
 *
 * Return: returns zero
 */
int main(void)
{
	char numarray[20] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(numarray[i]);
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
