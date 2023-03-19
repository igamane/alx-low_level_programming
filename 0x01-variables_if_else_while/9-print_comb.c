#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and
 *              determines if it is positive or negative.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s_d;

	s_d = 0;

	while (s_d <= 9)
	{
		putchar(s_d + '0');
		if (s_d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		s_d++;
	}

	putchar('\n');

	return (0);
}
