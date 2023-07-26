#include <stdlib.h>

/**
 * str_concat - gfh
 *
 * Description: hf
 *
 * @s1: gfhgh
 *
 * @s2: sfh
 *
 * Return: jshfj
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int size1;
	int size2;
	char *temp;
	int count1;
	int count2;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		s2[0] = '\0';
	}

	temp = s1;
	size1 = 0;
	size2 = 0;

	while (*temp != '\0')
	{
		size1++;
		temp++;
	}
	temp = s2;
	while (*temp != '\0')
	{
		size2++;
		temp++;
	}
	str = malloc((size1 + size2 + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (count1 = 0; count1 < size1; count1++)
	{
		str[count1] = s1[count1];
	}

	for (count2 = count1; count2 <= (count1 + size2); count2++)
	{
		str[count2] = s2[count2 - count1];
	}

	return (str);
}
