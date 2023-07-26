#include <stdlib.h>

/**
 * malloc_checked - ksjf
 *
 * Description: ksjf
 *
 * @b: sjfhj
 *
 * Return: sfh
 */

void *malloc_checked(unsigned int b)
{
	void *allo;

	allo = malloc(b);

	if (allo == NULL)
	{
		exit(98);
	}

	return (allo);
}
