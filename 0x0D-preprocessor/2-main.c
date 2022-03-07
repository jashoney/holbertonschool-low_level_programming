#include <stdlib.h>
#include <stdio.h>

/**
 * main - the program prints the name of the file it was compiled from
 * Return: zero if successful
 */
int main(void)
{
	#define file_name __FILE__
	printf("%s\n", file_name);
	return (0);
}
