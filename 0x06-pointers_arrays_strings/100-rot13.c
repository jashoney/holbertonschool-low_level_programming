#include "main.h"

/**
 * is_changechar - compares char to a list
 *                changes a tab to a space
 * @s: pointer to a char
 * Return: is void
 */

char changechar(int c)
{
	int i = 0;
	int input[52] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105 ,106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
	int output[52] = {78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 97, 98, 99, 100, 101, 102, 103, 104, 105 ,106, 107, 108, 109};

	while (i < 52)
	{
		if (c == input[i])
		{
			c = output[i];
			break;
		}
		i++;
	}
	return (c);
}
/**
 * rot13 - rotates letters letters + 13 places
 * @ptr: is the pointer to our string
 * Return: the ptr to the string
 */
char *rot13(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')
	{
		ptr[i] = changechar(ptr[i]);
		i++;
	}
	return (ptr);
}
