#include "main.h"

/**
 * _strcmp - compares 2 string and returns an integer
 * @s1: the first string
 * @s2: the second string
 * Return: the integer with the comparison result
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0, i = 0;

/*
 * moves looping through two arrays s1 and s2
 * i is the loop variable
 * stops when it hits a null char on either array
 * calculates a camparison the ascii value of char pairs
 * result = s1[i] less s2[i] and stops if  result != 0
 * returns result (of first unmatched chars)
 * or returns zero if each char in both arrays is the same
 */

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		result = s1[i] - s2[i];
		if (result != 0)
			break;
		i++;
	}
	return (result);
}
