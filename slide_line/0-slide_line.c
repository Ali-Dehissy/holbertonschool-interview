#include "slide_line.h"

/**
 * swap - Swaps between the two integers
 * @xp: Pointer
 * @yp: Pointer
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * slide_left - Slides an array of integers to the left
 * @line: Pointer
 * @size: Size of the array line
 */
void slide_left(int *line, size_t size)
{
	size_t i, p = 0;

	for (i = 0; i < size && p < size; i++)
	{
		while (line[p] == 0 && p < size && p + 1 < size)
			p++;
		if (line[i] == 0)
			swap(&line[p], &line[i]);
		p++;

	}
}
/**
 * slide_righ - Slides an array of integers to the right
 * @line: Pointer
 * @size: size of the array line
 */
void slide_right(int *line, size_t size)
{
	size_t i, p = size - 1;

	for (i = size - 1; (int)i >= 0 && (int)p >= 0; i--)
	{
		while (line[p] == 0 && (int)p > 0)
			p--;
		if (line[i] == 0)
			swap(&line[p], &line[i]);
		p--;

	}

}
/**
 * slide_line - Slides and merges an array of integers
 * @line: Pointer
 * @size: Number of the array elem
 * @direction: Slides to the direction
 * Return: 1 success or 0 failure
 */
int slide_line(int *line, size_t size, int direction)
{
	size_t i = 0;

	if (direction == SLIDE_LEFT)
	{
		slide_left(line, size);
		for (i = 0; i < size; i++)
		{
			if (line[i] == line[i + 1])
			{
				line[i] = line[i] + line[i + 1];
				line[i + 1] = 0;
			}
		}
		slide_left(line, size);
		return (1);
	} else if (direction == SLIDE_RIGHT)
	{
		slide_right(line, size);
		for (i = size - 1; (int) i >= 0; i--)
		{
			if (line[i] == line[i - 1])
			{
				line[i] = line[i] + line[i - 1];
				line[i - 1] = 0;
			}
		}
		slide_right(line, size);
		return (1);
	}
	return (0);
}
