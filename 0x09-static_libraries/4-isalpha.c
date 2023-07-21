/**
 * _isalpha - check if the letter is lower.
 *
 * @c: character as input
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	int result = 0;

	char alphabet = 'a';
	char alphabet_upper = 'A';

	while (alphabet <= 'z')
	{
		if (c == alphabet)
		{
			result = 1;
		}

		alphabet++;
	}

	while (alphabet_upper <= 'Z')
	{
		if (c == alphabet_upper)
		{
			result = 1;
		}
		alphabet_upper++;
	}

	return (result);
}
