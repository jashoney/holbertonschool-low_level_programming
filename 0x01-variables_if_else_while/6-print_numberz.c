#include <stdio.h>

/**
 * main - prints the numbers 0 up to 9 and then a new line
 * @number - integer that will hold each number
 *
 * Return: the function main returns 0
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; ++number)
		putchar(number);
	putchar('\n');
	return (0);
}
