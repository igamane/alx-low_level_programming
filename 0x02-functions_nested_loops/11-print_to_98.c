#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  print to a number
 *
 * Description: print starting from a number
 *
 * @n: the number
 *
 * Return: None
 */

void print_to_98(int n)
{
	int starting;

	starting = n;

	if (starting <= 98)
	{
		while (starting <= 98)
		{
			printf("%d", starting);
			if (starting != 98)
			{
				putchar(',');
				putchar(' ');
			} else
			{
				putchar('\n');
			}
			starting++;
		}
	} else
	{
		while (starting >= 98)
		{
			printf("%d", starting);
			if (starting != 98)
			{
				putchar(',');
				putchar(' ');
			} else
			{
				putchar('\n');
			}
			starting--;
		}
	}
}
