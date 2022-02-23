#include "main.h"

/**
 * _pow_recursion - calc x to the power of y
 * @x: input variable
 * @y: input variable
 * Return: the calc
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1)
	
	if (y == 0)
	{
		if (x < 0)
			return (-1);
		else if (x == 0)
			return (0);
		else
			return (1);
	}
	
	if (y == 1)
		return (x);
	
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
