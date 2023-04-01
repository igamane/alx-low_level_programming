
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
	char *temp;

	len = 0;
	temp = src;

	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
