#include "main.h"

/**
 * print_square - print a square
 *
 * Description: this is a description
 *
 * @size: the size of the square
 *
 * Return: None
 */

void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
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
