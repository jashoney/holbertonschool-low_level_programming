#include <stdio.h>

/**
 * main - prints the lower and upper case alphabets and a new line
 * @c - character that will hold each letter
 *
 * Return: the function main returns 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (c = 'A'; c <= 'Z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
