#include <stdio.h>
#include "main.h"

/**
 * print_array - print an array
 *
 * Description: print an array
 *
 * @a: the array
 * @n: number
 *
 * Return: None
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", %d", a[i]);
		} else
		{
		printf("%d", a[i]);
		}
	}

	putchar('\n');
}
