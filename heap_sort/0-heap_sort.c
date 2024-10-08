#include "sort.h"
/**
 * swap - Swap element.
 * @a: First element
 * @b: Second element.
 */
void swap(int *a, int *b)
{

	int temp = *a;

	*a = *b;

	*b = temp;
}
/**
 * heap_sort - Sorting an array using the sift-down heap sort
 * @array: The array to be sorted
 * @size: Size of the array
 */
void heap_sort(int *array, size_t size)
{
	int i, last;

	if (!array || size <= 1)
		return;
	last = (int)size - 1;
	for (last = (int)size - 1; last > 0; last--)
	{
		for (i = last; i >= 0; i--)
		{
			heapify(array, (int)size, i, last);
		}
		swap(&array[0], &array[last]);
		print_array((const int *)array, size);
	}
}

/**
 * heapify - makes the array a max-heap
 * @array: Array treated as a complete binary tree
 * @size: Size of the array
 * @parent: Index of the parent node (it will be compared with its children)
 * @last: Index to mark the end of the unsorted part of the array
 */
void heapify(int *array, int size, int parent, int last)
{
	int left, right;

	left = (parent * 2) + 1;
	right = (parent * 2) + 2;
	if (parent < 0 || parent >= size - 1)
		return;
	if (right <= last &&
	(array[right] >= array[left] && array[right] > array[parent]))
	{
		swap(&array[parent], &array[right]);
		print_array((const int *)array, (size_t)size);
		heapify(array, size, right, last);
	}
	if ((left <= last &&
	(right > last || array[left] > array[right])) && array[left] > array[parent])
	{
		swap(&array[parent], &array[left]);
		print_array((const int *)array, (size_t)size);
		heapify(array, size, left, last);
	}
}