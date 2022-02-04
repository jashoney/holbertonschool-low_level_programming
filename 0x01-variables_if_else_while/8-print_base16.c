#include <stdio.h>

/**
 * main - prints the numbers 0 up to 9 and then a new line
 *
 * Return: the function main returns 0
 */
int main(void)
{
	int hexnumber;

	for (hexnumber = 48; hexnumber <= 57; ++hexnumber)
		putchar(hexnumber);
	for (hexnumber = 97; hexnumber <= 102; ++hexnumber)
		putchar(hexnumber);
	putchar('\n');
	return (0);
}
