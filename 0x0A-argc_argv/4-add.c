#include "main.h"
#include <stdio.h>

/**
 * main - adds two numbers
 * @argc: the number of args passed to the program
 * @argv: an array of ptrs to the args passed to the program
 * Return: 0 is successful
 */
int main(int argc, char **argv)
{
	int i = 1, sum = 0, number;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (i <= argc - 1)
	{
		argv = argv + 1;
		number = 0;
		while (**argv != '\0')
		{
			if (**argv >= '0' && **argv <= '9')
			{
				number = number * 10 + (**argv - 48);
				*argv = *argv + 1;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + number;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
