#!/usr/bin/python3
'''Program that calculates the perimeter of an island'''


def island_perimeter(grid):
    '''defines the perimeter of the island'''
    width = len(grid[0])
    height = len(grid)
    perim = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perim += 4
                if j + 1 < width and grid[i][j + 1] == 1:
                    perim -= 1
                if j - 1 >= 0 and grid[i][j - 1] == 1:
                    perim -= 1
                if i + 1 < height and grid[i + 1][j] == 1:
                    perim -= 1
                if i - 1 >= 0 and grid[i - 1][j] == 1:
                    perim -= 1
    return perim
