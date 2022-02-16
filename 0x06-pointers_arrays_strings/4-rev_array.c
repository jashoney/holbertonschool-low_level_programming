#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;
/* 
 * This function takes a ptr to an array of numbers 
 * of length n, and reverses the content of the array
 * it does this by pointing to the start and to the end 
 * numbers, swapping them, and then repeating this process
 * as the pointers converge toward the middle of the array
 */
	while (i < n / 2)
	{
		temp = a[n - 1 - i];
		a[n -1 - i] = a[i];
		a[i] = temp;
		i++;	
	}
	
}
