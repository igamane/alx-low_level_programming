
/**
 * _strcpy - copy a string
 * Destination: copy a string
 * @dest: the destination
 * @src: the source
 * Return: the dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (*src != '\0')
	{
		len++;
		src++;
	}

	for (i = 0; i <= len; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
