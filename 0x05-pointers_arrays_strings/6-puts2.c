#include "main.h"

/**
 * puts2 - puts
 *
 * Description: puts
 *
 * @str: the string
 *
 * Return: None
 */

void puts2(char *str)
{
	int len;
	char *temp;
	int i;

	temp = str;
	len = 0;

	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
