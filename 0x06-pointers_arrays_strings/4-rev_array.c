
/**
 * reverse_array - reverse an array
 * Description: reverse an array
 * @a: the array
 * @n: n times
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		int temp;

		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
