#include "binary_trees.h"
/**
 * binary_tree_is_root - check whether a given node is the root a binary tree.
 * @node: pointer to the node to be checked.
 *
 * Return: 1 if node is root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
		if (node == NULL)
			return (0);

	return (node->parent == NULL);
	/* Check if the node's parent is NULL, indicating it is the root */
}
