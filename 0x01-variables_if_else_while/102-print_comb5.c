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
	int digit4;

	digit1 = '0';
	while (digit1 <= '9')
	{
		digit2 = '0';
		while (digit2 <= '9')
		{
			digit3 = digit1;
			digit4 = digit2 + 1;
			while (digit3 <= '9')
			{
				while (digit4 <= '9')
				{
					putchar(digit1);
					putchar(digit2);
					putchar(' ');
					putchar(digit3);
					putchar(digit4);
					if (digit1 > '8' && (digit2 > '7'))
						putchar('\n');
					else
						{								{
							putchar(',');
							putchar(' ');
						}
					}
					digit4++;
				}
				digit3++;
				digit4 = '0';
			}
			digit2++;
		}
		digit1++;
	}
	return (0);
}
