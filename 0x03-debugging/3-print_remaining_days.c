#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints how many days are left in a year
 *
 * @month: month input
 * @day: day of month
 * @year: year input
 * Return: is void
 */
void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0)
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}
