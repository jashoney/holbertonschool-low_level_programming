#include <stdio.h>

/**
 * main - prints the lower case alphabet, but not q or e, and a new line
 * @c - character that will hold each letter
 *
 * Return: the function main returns 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		if (c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');
	return (0);
}
