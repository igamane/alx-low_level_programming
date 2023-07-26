#include <stdlib.h>

/**
 * free_grid - jhf
 *
 * Description: kjfjd
 *
 * @grid: fjd
 *
 * @height: sjfhj
 *
 * Return: sfhj
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
