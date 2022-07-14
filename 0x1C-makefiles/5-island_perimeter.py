#!/usr/bin/python3
""" function to calc the perimeter of an island """


def island_perimeter(grid):
    """ returns the perimeter of an island """
    perimeter = 0
    prev_row_count = 0
    found_island = 0

    rows = len(grid)
    columns = len(grid[0])

    for i in range(rows):
        current_row_count = 0
        separated = 0
        found_island = 0
        for j in range(columns):
            if grid[i][j] == 1:
                current_row_count += 1
                found_island = 1
            else:
                if found_island == 1:
                    separated += 1
                    found_island = 0
        if current_row_count > 0:
            perimeter += 2
        if separated > 1:
            perimeter += separated - 1 
        if current_row_count > prev_row_count:
            perimeter += (current_row_count - prev_row_count)
        if current_row_count < prev_row_count:
            perimeter += (prev_row_count - current_row_count)
        print(f'row[{i}] count = {current_row_count}, prev[{i-1}] = {prev_row_count}, separated = {separated}, perimeter = {perimeter}')
        prev_row_count = current_row_count

    return perimeter
