#include "main.h"

/**
 * times_table - function for table
 *
 * Description: this is a description
 *
 * Return: None
 */

void times_table(void)
{
	int first_digit;

	first_digit = 0;

	while (first_digit <= 9)
	{
		int second_digit;

		second_digit = 0;

		while (second_digit <= 9)
		{
			int result;

			result = first_digit * second_digit;

			if (result < 10)
			{
				if (second_digit != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + result);
			} else
			{
				if (second_digit != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			if (second_digit != 9)
			{
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar('\n');
			}
			second_digit++;
		}
		first_digit++;
	}
}
