#include <stdio.h>

/**
 * main - program to show all of the unique pairs of two digits
 *
 * Return: returns 0
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	digit1 = '0';
	while (digit1 <= '9')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '9')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (digit1 < '7')
				{
					putchar(',');
					putchar(' ');
				}
				digit3++;
			}
			digit2++;
			digit3 = digit2 + 1;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
