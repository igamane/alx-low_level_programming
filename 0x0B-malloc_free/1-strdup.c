#include <stdlib.h>

/**
 * _strdup - hjf
 *
 * Description: jhf
 *
 * @str: jhf
 *
 * Return: sfhj
 */

char *_strdup(char *str)
{
	char *strcp;
	int size;
	char *temp;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}

	temp = str;
	size = 0;

	while (*temp != '\0')
	{
		size++;
		temp++;
	}

	strcp = malloc((size + 1) * sizeof(char));

	if (strcp == NULL)
	{
		return (NULL);
	}

	for (count = 0; count <= size; count++)
	{
		strcp[count] = str[count];
	}

	return (strcp);
}
