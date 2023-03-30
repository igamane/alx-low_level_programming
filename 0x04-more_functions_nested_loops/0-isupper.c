
/**
 * _isupper - check if uppercase
 *
 * Description: check for uppercase letters
 *
 * @c: character to be checked
 *
 * Return: result
 */

int _isupper(int c)
{
	int result;

	result = 0;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}

	return (result);
}
