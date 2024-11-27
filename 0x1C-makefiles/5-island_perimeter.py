#!/usr/bin/python3
"""
The script finds perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """
    The function returns the perimeter of grid.

    Args:
        Grid- The grid whose perimeter is to be found.
        Grid representing the map, where 1 represents land
        and 0 represents water.

    Returns:
        Int :The perimeter of island.
    """
    perimeter = 0  # Initialize perimeter to 0

    # Iterating through each cell of grid
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == 1:  # if cell is land
                # Assume all 4 sides contribute to perimeter
                perimeter += 4
                # Subtract for adjacent land cells -left
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1

                # Subtract for adjacent land celss -right
                if j < len(grid[i]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

                # subtract for adjacent lands - top
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1

                # Subtract for adjacent land cells (bottom)
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1

    return perimeter