#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - İki ölçülü massivi çap edir.
 * @grid: Massivin ünvanı.
 * @width: Massivin eni.
 * @height: Massivin hündürlüyü.
 *
 * Return: Heç nə.
 */
void print_grid(int **grid, int width, int height)
{
	int w, h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - Kodun işləkliyini yoxlamaq üçün əsas funksiya.
 *
 * Return: Həmişə 0.
 */
int main(void)
{
	int **grid;
	int i;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
		return (1);

	print_grid(grid, 6, 4);
	printf("\n");

	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);

	/* Dövrü dəyişənin xaricində elan edilməsi */
	for (i = 0; i < 4; i++)
		free(grid[i]);
	free(grid);

	return (0);
}
