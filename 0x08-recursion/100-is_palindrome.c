#include <string.h>
#include "main.h"

/**
 * is_palindrome - is palindorme
 *
 * Description: is palindorme
 *
 * @s: the string
 *
 * Return: 1 if it is
 */

int is_palindrome(char *s)
{
	int range;
	char *temp;

	temp = s;
	range = 0;

	if (*s == '\0')
	{
		return (1);
	}

	while (*(temp - 1))
	{
		range++;
		temp--;
	}

	if (*s != *(s + strlen(s) - 1 - range))
	{
		return (0);
	}

	return (is_palindrome(s + 1));
}
