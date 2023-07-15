#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @n: the input number
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int num;
	int last_digit;

	num = n;

	if (n < 0)
	{
		num = -n;
	}

	last_digit = num % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
