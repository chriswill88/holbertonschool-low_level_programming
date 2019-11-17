#!/usr/bin/python3
"""
    The island_perimeter Fuction
    looks at a 2 dimensional array
    and finds the perimeter of the 1's
    that define land
"""


def island_perimeter(grid):
    per = 0
    for i in range(len(grid)):
        for x in range(len(grid[i])):
            if grid[i][x] == 1:
                if x == len(grid[i]) or grid[i][x + 1] == 0:
                    per += 1
                if x == 0 or grid[i][x - 1] == 0:
                    per += 1
                if i == 0 or grid[i - 1][x] == 0:
                    per += 1
                if i == len(grid) or grid[i + 1][x] == 0:
                    per += 1
    return per
