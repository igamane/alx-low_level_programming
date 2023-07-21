
/**
 * _strncat - concatenates
 *
 * Description: concatenates
 * @dest: the desctination
 * @src: the source
 * @n: n times
 * Return: the destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen;
	int i;
	char *destTemp;

	destLen = 0;
	destTemp = dest;

	while (*destTemp != '\0')
	{
		destLen++;
		destTemp++;
	}

	for (i = 0; ((*(src + i) != '\0') && i < n); i++)
	{
		*(dest + destLen + i) = *(src + i);
		if ((*(src + i + 1) == '\0') || !((i + 1) < n))
		{
			*(dest + destLen + i + 1) = '\0';
		}
	}

	return (dest);
}
