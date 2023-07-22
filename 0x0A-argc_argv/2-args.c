#include <stdio.h>

/**
 * main - the main function
 *
 * Description: the main function
 *
 * @argc: argument count
 *
 * @argv: arguments vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int count;

	for(count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
