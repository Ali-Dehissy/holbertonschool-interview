#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree
 *
 * @n: An integer stored in the node
 * @parent: A pointer to the parent node
 * @left: A pointer to the left child node
 * @right: A pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s avl_t;

void binary_tree_print(const binary_tree_t *);

int binary_tree_is_avl(const binary_tree_t *tree);

#endif /* _BINARY_TREES_H_ */
