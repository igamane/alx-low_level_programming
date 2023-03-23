#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int counter = 1;

	while (counter <= 10)
	{
		char alphabet;

		alphabet = 'a';
		while (alphabet <= 'z')
		{
		_putchar(alphabet);
		alphabet++;
		}
		_putchar('\n');
		counter++;
	}
}
