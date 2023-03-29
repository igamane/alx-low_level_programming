#include <stdio.h>

/**
 * check_and_print - print digits
 *
 * Description: this is a description
 *
 * @first: first digit
 *
 * @second: second digit
 *
 * @third: third digit
 *
 * @fourth: fourth digit
 *
 * Return: None
 */

void check_and_print(int first, int second, int third, int fourth)
{
	if (first != third || second != fourth)
	{
		if (first != 0 ||
			second != 0 ||
			third != 0 ||
			fourth != 1)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(first + '0');
		putchar(second + '0');
		putchar(' ');
		putchar(third + '0');
		putchar(fourth + '0');
	}
}

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
				int fourth_digit;

				fourth_digit = 0;

				while (fourth_digit <= 9)
				{
					check_and_print(first_digit,
							second_digit,
							third_digit,
							fourth_digit);
					fourth_digit++;
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
