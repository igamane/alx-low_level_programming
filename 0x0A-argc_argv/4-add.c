#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 *
 * Description: hgd
 *
 * @argc: hdg
 *
 * @argv: jhf
 *
 * Return: fh
 */

int main(int argc, char *argv[])
{
	int count;
	int sum;

	sum = 0;

	for (count = 1; count < argc; count++)
	{
		int inte;

		inte = atoi(argv[count]);

		if (inte == 0 && *argv[count] != '0')
		{
			printf("Error\n");
			return (1);
		}

		sum += inte;
	}

	printf("%d\n", sum);

	return (0);
}
