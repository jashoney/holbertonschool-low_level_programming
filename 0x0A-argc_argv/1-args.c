#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: the number of args passed to the program
 * @argv: an array of ptrs to the args passed to the program
 * Return: 0 is successful
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}



