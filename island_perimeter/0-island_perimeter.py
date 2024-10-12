#!/usr/bin/python3
"""
Perimetre
"""


def island_perimeter(grid):
    """
    Grid on ints
    """
    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for x in range(cols):
            if grid[i][x] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][x] == 1:
                    perimeter -= 2
                if x > 0 and grid[i][x - 1] == 1:
                    perimeter -= 2

    return perimeter