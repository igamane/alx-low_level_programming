#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * Description: print a triangle
 *
 * @size: the size
 *
 * Return: None
 */

void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int j;
		int k;

		for (j = 1; j <= (size - i); j++)
		{
			_putchar(' ');
		}

		for (k = 1; k <= i;  k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
