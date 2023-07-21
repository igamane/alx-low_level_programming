#include "main.h"

/**
 * _strlen_recursion(char *s) - the lenght of a string
 *
 * Description: theh
 *
 * @s: the string
 *
 * Return: the lenght
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return 1 + _strlen_recursion(s + 1);
	} else
	{
		return 0;
	}
}
