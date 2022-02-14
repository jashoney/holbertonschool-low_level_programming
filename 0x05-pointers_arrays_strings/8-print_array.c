#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a string in reverse
 * a: is a pointer to an array of integers
 * n: number or elements in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0, arrayint; 

	while (i < n)
	{
		arrayint = *(a + i);
		printf("%d", arrayint);
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
