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
	int first_digit;

	first_digit = 0;

	while (first_digit <= 9)
	{
		int second_digit;

		second_digit = 0;

		while (second_digit <= 9)
		{
			int third_digit;

			third_digit = 0;

			while (third_digit <= 9)
			{
				if (first_digit != second_digit && first_digit != third_digit && second_digit != third_digit)
				{
					if (first_digit < second_digit && first_digit < third_digit && second_digit < third_digit)
					{
						if (first_digit != 0 || second_digit != 1 || third_digit != 2)
						{
							putchar(',');
							putchar(' ');
						}
						putchar(first_digit + '0');
						putchar(second_digit + '0');
						putchar(third_digit + '0');
					}
				}
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}

	putchar('\n');

	return (0);
}
