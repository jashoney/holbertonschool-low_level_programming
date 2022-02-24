#include "main.h"
#include <stdio.h>

/**
 * main - prints the programs name
 * @argc: the number of args passed to the program
 * @argv: an array of ptrs to the args passed to the program
 * Return: 0 is successful
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}



