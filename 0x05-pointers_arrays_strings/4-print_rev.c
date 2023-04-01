#include "main.h"

/**
 * print_rev - print in reverse
 *
 * Description: print in reverse
 *
 * @s: the string
 *
 * Return: None
 */

void print_rev(char *s)
{
	char *temp;

	temp = s;

	while (*(s + 1) != '\0' && *s != '\0')
	{
		s++;
	}

	while (s >= temp)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
