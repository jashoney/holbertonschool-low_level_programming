#include <stdio.h>

/* main - function to calculate the prime factors of a given number
 *
 * Return: returns zero
 */

int findFactor(long int checknumber)
{
	long int ffactor = 2;
	if (ffactor < checknumber)
		while (ffactor <= checknumber)
		{
			
			if (checknumber % ffactor == 0)
				return (ffactor);
			ffactor++;
		}
	else 
		return (0);
}

int main(void)
{
	long int number, largestfactor, firstfactor, factorproduct, loopnumber;
	int test;

	number = 612852475143;
	largestfactor = 1;
	factorproduct = 1;
	loopnumber = number;

	while (loopnumber > 2)
	{
		firstfactor = findFactor(loopnumber);
		if (firstfactor == 0)
		{
			printf("oops, mistake found");
			break;
		}
		printf("first factor = %ld, ", firstfactor);
		factorproduct = factorproduct * firstfactor;
		printf("factor product is = %ld \n", factorproduct);
		if (largestfactor < firstfactor)
			largestfactor = firstfactor;
		if (factorproduct == number)
			loopnumber = 2;
		else
		{
			loopnumber = loopnumber / firstfactor;
			printf("loopnumber is: %ld \n", loopnumber);
		}
	}
	printf("The largest prime factor of %ld is: ", number);
	printf("%ld", largestfactor);
	printf("\n");
	return 0;
}
