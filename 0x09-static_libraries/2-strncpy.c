
/**
 * _strncpy - copy
 * Description: copy
 * @dest: the destination
 * @src: the source
 * @n: n times
 * Return: the address
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);

		if (*(src + i) == '\0')
		{
			break;
		}
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
