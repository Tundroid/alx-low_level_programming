#!/usr/bin/python3
"""Defines a function measuring island perimeter."""


def island_perimeter(grid):
    """Returns island perimiter.

    The grid represents water by 0 and land by 1.

    Args:
        grid: A matrix of integers representing an island.
    Returns:
        The perimeter of the island defined in @grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j]:
                size += 1
                edges = edges + 1 if (j > 0 and grid[i][j - 1] == 1) else edges
                edges = edges + 1 if (i > 0 and grid[i - 1][j] == 1) else edges
    return size * 4 - edges * 2
