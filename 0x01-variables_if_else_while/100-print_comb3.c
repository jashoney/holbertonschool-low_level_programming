#include <stdio.h>

/**
 * main - program to show all of the unique pairs of two digits
 *
 * Return: returns 0
 */
int main(void)
{
	int firstdigit;
	int seconddigit;

	firstdigit = '0';
	seconddigit = '1';
	while (firstdigit <= '9')
	{
		while (seconddigit <= '9')
		{
			putchar(firstdigit);
			putchar(seconddigit);
			seconddigit++;
			if (firstdigit < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
		firstdigit++;
		seconddigit = firstdigit + 1;
	}
	putchar('\n');
	return (0);
}
