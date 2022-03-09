#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - uses a type op_t to identify which operator to use
 * @s: the operator string
 * Return: 0 if s != operator, or a ptr to the function to be used
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

	i = 0;
	while (i < 5)
	{
		if (*(ops[i].operator) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
