#include "menger.h"

/**
 * menger - Draws a menger
 * @level: Depth of the menger
 * Return: None
 */

void menger(int level)
{
	int axisX, axisY, j, dim = 1;

	if (level >= 0)
	{
		for (axisX = 0; axisX < level; axisX++)
		{
			dim *= 3;
		}

		for (axisX = 0; axisX < dim; axisX++)
		{
			for (axisY = 0; axisY < dim; axisY++)
			{
				for (j = dim / 3; d > 0; d /= 3)
				{
					if ((axisX % (j * 3)) / j == 1 && (axisY % (j * 3)) / j == 1)
						break;
				}
				if (j)
				{
					printf(" ");
				} else
				{
					printf("#");
				}
			}
			printf("\n");
		}
	}
}
