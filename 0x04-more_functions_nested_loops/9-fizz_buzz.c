#include "main.h"
#include <stdio.h>

/**
 * main - print number for 1 to 100 with a few substitutions
 *
 * Return: always returns 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
