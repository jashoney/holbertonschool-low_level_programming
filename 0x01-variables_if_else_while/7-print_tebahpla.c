#include <stdio.h>

/**
 * main - prints the lower case alphabet in reverse and a new line
 * @c - character that will hold each letter
 *
 * Return: the function main returns 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
