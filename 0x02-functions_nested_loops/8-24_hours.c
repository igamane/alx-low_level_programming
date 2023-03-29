#include "main.h"

/**
 * jack_bauer - a function
 *
 * Description: this is a function
 *
 * Return: None
 */

void jack_bauer(void)
{
	int hours;

	hours = 0;

	while (hours <= 23)
	{
		int minutes;

		minutes = 0;

		while (minutes <= 59)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (minutes / 10));
			_putchar('0' + (minutes % 10));
			_putchar('\n');

			minutes++;
		}
		hours++;
	}
}
