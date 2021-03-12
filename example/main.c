#include <stdio.h>
#include <string.h>
#include "matrix.h"

int				main()
{
	char		*textmap;
	t_matrix	*tilemap;
	unsigned	rows, cols;
	unsigned	x, y;

	textmap = "11111100111000110201100011100111111";
	cols = 5;
	rows = strlen(textmap) / cols;

	tilemap = matrix_create(rows, cols, sizeof(int));
	if (!tilemap)
		return (1);

	for (y = 0; y < tilemap->rows; ++y)
		for (x = 0; x < tilemap->cols; ++x)
			tilemap->arr[y][x] = *textmap++ - '0';

	for (y = 0; y < tilemap->rows; ++y)
	{
		for (x = 0; x < tilemap->cols; ++x)
			printf("%d", tilemap->arr[y][x]);
		printf("\n");
	}

	matrix_delete(tilemap);
}
