#include "main.h"

/**
 * factorial - factorial
 *
 * Description: factiorial of a number
 *
 * @n: the number
 *
 * Return: the factoriel
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	} else if (n == 0)
	{
		return (1);
	} else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
