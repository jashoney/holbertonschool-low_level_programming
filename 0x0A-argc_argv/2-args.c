#include "main.h"
#include <stdio.h>

/**
 * main - prints all of the arguments it receives
 * @argc: the number of args passed to the program
 * @argv: an array of ptrs to the args passed to the program
 * Return: 0 is successful
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", *argv);
		argv = argv + 1;
		i++;
	}
	return (0);
}
