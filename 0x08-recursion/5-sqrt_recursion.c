#include "main.h"
/**
 * test_function -  tests n to find a natural sqrt
 * @n: the number to be tested
 * @test: the test variable
 * Return: the natural sqrt, or -1 if none found
 */
int test_function(int test, int n)
{
	if (test > n / 2)
		return (-1);

	if (n == test * test)
		return (test);
	else
		return (test_function(test + 1, n));
}
/**
 * _sqrt_recursion - finds a natural sqrt of n
 * @n: the number to be tested
 * Return: the sqrt or -1 if there is no natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (test_function(1, n));
}
