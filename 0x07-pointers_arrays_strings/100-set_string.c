#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a ptr to a ptr
 * @to: a ptr to a char
 * Return: is void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
