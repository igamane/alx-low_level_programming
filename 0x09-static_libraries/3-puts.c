#include "main.h"

/**
 * _puts - put a string
 *
 * Description: put a string
 *
 * @str: the string
 *
 * Return: None
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
