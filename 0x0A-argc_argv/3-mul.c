#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two integers
 * @argc: the number of args passed to the program
 * @argv: an array of ptrs to the args passed to the program
 * Return: 0 is successful
 */
int main(int argc, char **argv)
{
	int i = 0, product, negative = 1;
	int number[2] = {0, 0};

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	while (i < 2)
	{
		argv = argv + 1;
		if (**argv == '-')
		{
			negative = -1;
			*argv = *argv + 1;
		}
		else
			negative = 1;
		while (**argv != '\0')
		{
			number[i] = number[i] * 10 + (**argv - 48);
			*argv = *argv + 1;
		}
		number[i] = number[i] * negative;
		i++;
	}
	i = 1;
	product = number[0] * number[1];
	printf("%d\n", product);
	return (0);
}
