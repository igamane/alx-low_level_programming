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
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	putchar('\n');

	return (0);
}
