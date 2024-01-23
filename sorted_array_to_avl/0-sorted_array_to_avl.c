#include "binary_trees.h"

/**
 * Binary_tree_node - builds an AVL tree from an array
 * @parent: The array to be printed
 * @index: Size of the array
 * @array: Size of the array
 * Return: binary tree on success or NULL
 */
avl_t *binary_tree_node(avl_t *parent, int index, int *array)
{
	avl_t *new_node = NULL;

	new_node = malloc(sizeof(avl_t));
	if (!new_node)
		return (NULL);

	new_node->left = new_node->right = NULL;
	new_node->n = array[index];
	new_node->parent = parent;

	return (new_node);
}

/**
 * Sorted_array_to_avl - builds an AVL tree from an array
 * @array: The array to be printed
 * @size: Size of the array
 * Return: binary tree on success or NULL
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *new_node = NULL;

	if (!array || !size)
		return (NULL);


	new_node = SortedArrayToAVL(array, 0, size - 1, NULL);
	return (new_node);
}

/**
 * SortedArrayToAVL - builds an AVL tree from an array
 * @array: pointer array
 * @root: Size of the array
 * @start: Size of the array
 * @end: Size of the array
 * Return: binary tree on success or NULL
 */
avl_t *SortedArrayToAVL(int *array, size_t start, size_t end, avl_t *root)
{
	size_t x;
	avl_t *new_node = NULL;

	if (start > end)
		return (NULL);

	x = (start + end) / 2;

	new_node = binary_tree_node(root, x, array);
	if (!new_node)
		return (NULL);

	if (x != start)
		new_node->left = SortedArrayToAVL(array, start, x - 1,
				new_node);

	if (x != end)
		new_node->right = SortedArrayToAVL(array, x + 1, end,
				new_node);

	return (new_node);
}
