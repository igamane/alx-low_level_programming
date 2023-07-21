#include "main.h"

/**
 * void _print_rev_recursion - print in reverse
 *
 * Description: print a string
 *
 * @s: the string
 *
 * Return: None
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
