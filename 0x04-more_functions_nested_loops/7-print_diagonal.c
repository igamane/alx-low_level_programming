#include "main.h"

/**
 * print_diagonal - print diagonals
 *
 * Description: print diagonals
 *
 * @n: the parameter
 *
 * Return: None
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
