
/**
 * _strcmp - compare
 * Description: compare
 * @s1: first
 * @s2: second
 * Return: the value
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int value;

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		if (*(s1 + i) > *(s2 + i))
		{
			value = 15;
			break;
		} else if (*(s1 + i) < *(s2 + i))
		{
			value = -15;
			break;
		} else if (*(s1 + i) == *(s2 + i))
		{
			value = 0;
		}
	}

	return (value);
}
