#include <stdio.h>
#include <string.h>
#include "matrix.h"

int				main()
{
	char		*textmap;
	t_matrix	*tilemap;
	unsigned	rows;
	unsigned	cols;

	textmap = "11111100111000110201100011100111111";
	cols = 5;
	rows = strlen(textmap) / cols;

	tilemap = matrix_create(rows, cols);
	if (!tilemap)
		return (1);

	for (int y = 0; y < tilemap->rows; ++y)
		for (int x = 0; x < tilemap->cols; ++x)
			tilemap->arr[y][x] = *textmap++ - 48;

	for (int y = 0; y < tilemap->rows; ++y)
	{
		for (int x = 0; x < tilemap->cols; ++x)
			printf("%d", tilemap->arr[y][x]);
		printf("\n");
	}

	matrix_delete(tilemap);
}
