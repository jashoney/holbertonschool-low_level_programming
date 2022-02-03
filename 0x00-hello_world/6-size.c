#include <stdio.h>

/**
 *  main - Entry point
 *  Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: ");
	printf("%lu", sizeof(char));
	printf(" byte(s)\n");
	printf("Size of an int: ");
	printf("%lu", sizeof(int));
	printf(" byte(s)\n");
	printf("Size of a long int: ");
	printf("%lu", sizeof(long));
	printf(" byte(s)\n");
	printf("Size of a long long int: ");
	printf("%lu", sizeof(double));
	printf(" byte(s)\n");
	printf("Size of a float: ");
	printf("%lu", sizeof(float));
	printf(" byte(s)\n");

	return (0);
}
