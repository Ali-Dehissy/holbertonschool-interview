#!/usr/bin/python3
"""A function to find the perimiter of an island """

def island_perimeter(grid):
    """
    Input: List of Lists
    Returns: The perimeter of the island
    """
    counter = 0
    row = len(grid)
    col = len(grid[0]) if row else 0

    for i in range(len(grid)):
        for x in range(len(grid[i])):

            idx = [(i - 1, x), (i, x - 1), (i, x + 1), (i + 1, x)]
            check = [1 if k[0] in range(row) and k[1] in range(col) else 0
                     for k in idx]

            if grid[i][x]:
                counter += sum([1 if not r or not grid[k[0]][k[1]] else 0
                              for r, k in zip(check, idx)])

    return (counter)
