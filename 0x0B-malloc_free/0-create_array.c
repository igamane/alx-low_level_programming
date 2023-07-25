#include <stdlib.h>

/**
 * create_array - create an arry
 *
 * Description: jhfj
 *
 * @size: hf
 *
 * @c: djh
 *
 * Return: hdj
 */

char *create_array(unsigned int size, char c)
{
	char *c_array;

	if (size == 0)
	{
		return (NULL);
	}

	c_array = malloc(size * sizeof(char));

	if (c_array == NULL)
	{
		return (NULL);
	}

	while (size > 0)
	{
		c_array[size] = c;
		size--;
	}

	return (c_array);
}
