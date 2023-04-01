
/**
 * swap_int - swap ntegers
 *
 * Description: swap integeres
 *
 * @a: first
 * @b: second
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
