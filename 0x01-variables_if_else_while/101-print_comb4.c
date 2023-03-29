#include <stdio.h>

/**
 * check_and_print - check and print numbers
 *
 * main - Entry point of the program
 *
 * @first: first digit
 *
 * @second: second digit
 *
 * @third: third digit
 *
 * Return: Always 0 (Success)
 */

void check_and_print(int first, int second, int third)
{
	if (first != second &&
		first != third &&
		second != third)
	{
		if (first < second &&
			first < third &&
			second < third)
		{
			if (first != 0 ||
				second != 1 ||
				third != 2)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(first + '0');
			putchar(second + '0');
			putchar(third + '0');
		}
	}
}

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
				check_and_print(first_digit, second_digit, third_digit);
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}

	putchar('\n');

	return (0);
}
