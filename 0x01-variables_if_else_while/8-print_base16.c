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
	char digit;
	char alpha;

	digit = '0';
	alpha = 'a';

	while (digit <= '9')
	{
		putchar(digit);

		if (digit == '9')
		{
			while (alpha <= 'f')
			{
				putchar(alpha);
				alpha++;
			}
		}

		digit++;
	}

	putchar('\n');

	return (0);
}
