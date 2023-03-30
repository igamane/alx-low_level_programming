#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Description: print numbers
 *
 * Return: None
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
