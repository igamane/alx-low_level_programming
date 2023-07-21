
/**
 * _strcat - concatenates
 *
 * Description: concatenates
 * @dest: the desctination
 * @src: the source
 * Return: the destination
 */

char *_strcat(char *dest, char *src)
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

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + destLen + i) = *(src + i);
		if (*(src + i + 1) == '\0')
		{
			*(dest + destLen + i + 1) = '\0';
		}
	}

	return (dest);
}
