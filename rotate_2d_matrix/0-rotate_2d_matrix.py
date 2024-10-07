#!/usr/bin/python3
"""
Rotate 2D Matrix
"""


def rotate_2d_matrix(matrix):
    """ Rotation Matrixx """
    N = len(matrix)
    for j in range(N // 2):
        last = N - 1
        for x in range(j, last - j):
            tmp = matrix[j][x]
            matrix[j][x] = matrix[last - x][j]
            matrix[last - x][j] = matrix[last - j][last - x]
            matrix[last - j][last - x] = matrix[x][last - j]
            matrix[x][last - j] = tmp


if __name__ == "__main__":
    matrix = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]

    rotate_2d_matrix(matrix)
    print(matrix)