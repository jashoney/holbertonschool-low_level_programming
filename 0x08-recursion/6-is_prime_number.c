#include "main.h"
/**
 * test_function - tests n recursively find whether n is prime
 * @n: the number to be tested
 * @test: the test
 * Return: 0 if not n is a prime, 1 if n is a prime
 */
int test_function(int test, int n)
{
	if (test == n)
		return (1);

	if (n % test == 0)
		return (0);
	else
		return (test_function(test + 1, n));
}
/**
 * is_prime_number - tests if n is a prime number
 * @n: the number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (test_function(2, n));
}
