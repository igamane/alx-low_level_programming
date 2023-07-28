#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
 * free_dog - fjhjd
 *
 * @d: skfh
 *
 * Description: sff
 *
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
