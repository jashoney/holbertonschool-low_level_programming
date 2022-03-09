#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - calls the required function which performs an op to 2 ints
 * @s: a ptr the required function
 * Return: 0 if S != operator, or the result of the function called
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s == NULL)
		return (0);
	i = 0;
	while (i < 5)
	{
		if (*(ops[i].operator) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
