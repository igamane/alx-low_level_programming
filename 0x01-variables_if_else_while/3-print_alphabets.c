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
	char lowerC;
	char upperC;

	lowerC = 'a';
	upperC = 'A';

	while (lowerC <= 'z')
	{
		putchar(lowerC);
		lowerC += 1;
	}

	while (upperC <= 'Z')
	{
		putchar(upperC);
		upperC += 1;
	}

	putchar('\n');

	return (0);
}
