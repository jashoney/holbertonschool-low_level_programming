#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function short description is here
 *
 * Return: returns zero
 */
int main(void)
{
	int n;
	int answer;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		answer = 0;
		else if (n > 0)
			answer = n - (n / 10) * 10;
		else
			answer = (n - (n / 10) * 10) * -1;
	if (answer == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
		else if (answer < 6)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, answer);
		else
			printf("Last digit of %d is %d and is greater than 5\n", n, answer);
	return (0);
}
