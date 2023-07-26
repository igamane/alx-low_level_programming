#include <stdlib.h>

/**
 * str_concat - jdfj
 *
 * Description: jhsfj
 *
 * @concat: sfjhjf
 * @s1: sjhf
 *
 * @s2: dhjf
 *
 * @size1: sjh
 *
 * @size2: sjhsfj
 *
 * Return: sf
 */
char *str_concat(char *concat,
		char *s1,
		char *s2,
		unsigned int size1,
		unsigned int size2)
{
	unsigned int i, j;

	for (i = 0; i < size1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = size1; j < (size1 + size2); j++)
	{
		concat[j] = s2[j - size1];
	}
	concat[j] = '\0';

	return (concat);
}

/**
 * string_nconcat - jdfj
 *
 * Description: jhsfj
 *
 * @s1: sjhf
 *
 * @s2: dhjf
 *
 * @n: jfjs
 *
 * Return: sf
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat, *temp;
	unsigned int size1, size2;

	if (s1 == NULL)
		s1 = malloc(sizeof(char)), s1[0] = '\0';
	if (s2 == NULL)
		s2 = malloc(sizeof(char)), s2[0] = '\0';
	temp = s1, size1 = 0, size2 = 0;
	while (*temp != '\0')
	{
		size1++, temp++;
	}
	temp = s2;
	while (*temp != '\0')
	{
		size2++, temp++;
	}

	if (n >= size2)
	{
		concat = malloc(size1 * (size2 + 1) * sizeof(char));
	} else
	{
		concat = malloc(size1 * (n + 1) * sizeof(char));
	}

	if (concat == NULL)
	{
		return (NULL);
	}

	if (n >= size2)
	{
		return (str_concat(concat, s1, s2, size1, size2));
	}

	return (str_concat(concat, s1, s2, size1, n));
}
