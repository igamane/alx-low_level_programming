#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 *
 * Description: dhg
 *
 * @argc: hdg
 *
 * @argv: hf
 *
 * Return: 0 jfh
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
