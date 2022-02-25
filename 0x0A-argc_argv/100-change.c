#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - provides the min number of coins required in change given
 * @argc: the number of arguments to the function
 * @argv: a ptr to a ptr of a strings
 * Return: 1 on error, 0 if true
 */
int main(int argc, char **argv)
{
	int amount = 0, coins = 0, fiftyc, tenc, fivec, twoc;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	argv = argv + 1;
	amount = atoi(*argv);
	if (amount >= 25)
	{
		fiftyc = amount / 25;
		coins = coins + fiftyc;
		amount = amount - fiftyc * 25;
	}
	if (amount >= 10)
	{
		tenc = amount / 10;
		coins = coins + tenc;
		amount = amount - tenc * 10;
	}
	if (amount >= 5)
	{
		fivec = amount / 5;
		coins = coins + fivec;
		amount = amount - fivec * 5;
	}
	if (amount >= 2)
	{
		twoc = amount / 2;
		coins = coins + twoc;
		amount = amount - twoc * 2;
	}
	coins = coins + amount;
	printf("%d\n", coins);
	return (0);
}
