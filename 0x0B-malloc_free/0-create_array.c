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
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}

	c_array = malloc(size * sizeof(char));

	if (c_array == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count ++)
	{
		c_array[count] = c;
	}

	return (c_array);
}
