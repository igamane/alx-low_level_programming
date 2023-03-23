/**
 * _abs - give the absolute value
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		abs = -n;
	} else 
	{
		abs = n;
	}

	return abs;
}
