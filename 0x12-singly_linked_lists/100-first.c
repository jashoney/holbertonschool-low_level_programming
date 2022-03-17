#include <stdio.h>

void beforemain(void) __attribute__ ((constructor));

/**
 * beforemain - prints a sentence before main is called
 * Return: is void
 */

void beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
