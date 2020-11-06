#!/usr/bin/python3
"""module of function"""


def island_perimeter(grid):
    """that returns the perimeter of the island described in grid"""
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1 and p == 0:
                p += 4
                break
            if grid[i][j] == 1:
                p += 2
    return p
