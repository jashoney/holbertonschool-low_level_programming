#include "main.h"

/**
 * factorial - recusively calcs the factorial of a number
 * @n: the number
 * Return: - 1 on error, of the factorial of the number
 */
int factorial(int n)
{
	if (n > 1)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	else
	{
		if (n < 0)
			return (-1);
		else if (n == 0)
			return (0);
		else
			return (1);
	}
}
