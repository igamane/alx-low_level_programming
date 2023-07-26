#include <stdlib.h>

/**
 * _calloc - jhf
 *
 * Description: skfkf
 *
 * @nmemb: sfjhd
 *
 * @size: fjhd
 *
 * Return: fhdj
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		*(array + i) = 0;
	}

	return (array);
}
