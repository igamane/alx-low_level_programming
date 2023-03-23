/**
 * _islower - check if the letter is lower.
 *
 * @c: character input
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	int result = 0;

	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (c == alphabet)
		{
			result = 1;
		}

		alphabet++;
	}

	return (result);
}
