#!/usr/bin/python3
"""Defines a function that measures Island perimeter"""

def island_perimeter(grid):
    """Calculates the perimeter of the Island in the grid.

    Args:
        grid (list of lists): Represents Island terrain where 1 is land
        and 0 is water.

    Return:
        int: the perimeter of the Island
    """

    rows = len(grid)
    if rows:
        cols = len(grid[0])
    else:
        cols = 0

    size = 0
    edges = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                size += 1

                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

                if j > 0 and grid[i][j - 1] == i:
                    edges += 1

    return size * 4 - edges * 4