#include "main.h"

/**
 * puts_half - puts half
 *
 * Description: puts half
 *
 * @str: the string
 * Return: None
 */

void puts_half(char *str)
{
	char *temp;
	int len;
	int half;

	temp = str;
	len = 0;

	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	if ((len % 2) == 1)
	{
		half = (len - 1) / 2;
	} else
	{
		half = len / 2;
	}

	for (; half < len; half++)
	{
		_putchar(*(str + half));
	}

	_putchar('\n');
}
