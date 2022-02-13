#include "main.h"

/**
 * swap_int - takes 2 pointers to integers and swaps their values
 * @a: is a pointer to an integer
 * @b: is a pointer to an integer
 * return: void
 */
void swap_int(int *a, int *b)
{
	int swapint;

	swapint = *b;
	*b = *a;
	*a = swapint;
}

