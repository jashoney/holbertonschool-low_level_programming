#include "main.h"
/**
 * test_function -  tests n recursively find whether it is prime
 * @n: the number to be tested
 * @test: the test variable
 * Return: 0 if not n is a prime, 1 if n is a prime
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
	else
		return (test_function(1, n));
}
