#include <stdlib.h>

/**
 * alloc_grid - jhf
 *
 * Description: hfj
 *
 * @width: jf
 *
 * @height: jhfj
 *
 * Return: jfd
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			int k;

                        for (k = 0; k < i; k++)
                        {
                                free(array[k]);
                        }
                        free(array);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
