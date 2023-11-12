#!/usr/bin/python3
"""
In a text file, there is a single character H. Your text editor
can execute only two operations in this file: Copy All and Paste.
Given a number n, write a method that calculates the fewest number
of operations needed to result in exactly n H characters in the file.
"""


def countProcess(num):
    """ Return list of process until n H """
    con = 1
    p_list = []
    value = num
    while value != 1:
        con += 1
        if value % con == 0:
            while (value % con == 0 and value != 1):
                value /= con
                p_list.append(con)

    return p_list


def minOperations(n):
    """ Returning the sum of process """
    if n < 2 or type(n) is not int:
        return 0
    values = countProcess(n)
    return sum(values)
