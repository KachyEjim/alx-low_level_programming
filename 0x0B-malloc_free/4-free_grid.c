#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid
 *
 * @grid: 2 dementional grid to be freed
 * @height: height of the grid
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(grid[i++]);

	free(grid);

}
