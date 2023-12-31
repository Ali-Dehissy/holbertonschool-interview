#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_
#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: an integer stored in the node
 * @parent: a ointer to the parent node
 * @left: a pointer to the left child node
 * @right: a pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;
typedef struct binary_tree_s heap_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
heap_t *heap_insert(heap_t **root, int value);
size_t binary_tree_height(const binary_tree_t *tree);
binary_tree_t *insert(binary_tree_t *tree, size_t level, int value);
size_t binary_tree_depth(const heap_t *tree);
#endif /* _BINARY_TREES_H_ */
