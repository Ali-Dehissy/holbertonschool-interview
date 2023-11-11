#!/usr/bin/python3
'''
Returns list representing the Pascal's triangle of j
'''


def pascal_triangle(j):
    '''returns empty list if j <= 0'''
    pascal_list = []
    if j <= 0:
        return pascal_list
    for i in range(j):
        row = [1]
        if pascal_list:
            last_row = pascal_list[-1]
            row.extend([sum(pair) for pair in zip(last_row, last_row[1:])])
            row.append(1)
        pascal_list.append(row)
    return (pascal_list)
