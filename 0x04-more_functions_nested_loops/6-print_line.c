#include "main.h"

/**
 * print_line - print the lines
 *
 * Description: print the lines
 *
 * @n: the number
 *
 * Return: None
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
