#include <stdio.h>

/**
 * main - prints the lower case alphabet and a new line
 * @c - character that will hold each letter
 *
 * Return: the function main returns 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
