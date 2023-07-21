
/**
 * _isdigit - check for digits
 *
 * Description: check for digits
 *
 * @c: the digit as character
 *
 * Return: result
 */

int _isdigit(int c)
{
	int result;

	result = 0;

	if (c >= 48 && c <= 57)
	{
		result = 1;
	}

	return (result);
}
