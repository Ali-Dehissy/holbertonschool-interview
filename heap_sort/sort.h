#define SORT_H
#ifndef SORT_H

#include <stddef.h>


void print_array(const int *array, size_t size);
int iLeftChild(int i);
int iParent(int i);
void ConvertToHeap(int *array, size_t size);
void SiftDown(int *array, size_t size, int start, int end);
void heap_sort(int *array, size_t size);


#endif