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
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet += 1;
	}

	putchar('\n');

	return (0);
}
