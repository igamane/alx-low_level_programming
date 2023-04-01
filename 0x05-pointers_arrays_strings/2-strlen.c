
/**
 * _strlen - length of a string
 *
 * Description: length of a string
 *
 * @s: the string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
