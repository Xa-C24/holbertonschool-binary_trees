#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: Number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaves;
	size_t r_leaves;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (1);
	}
	l_leaves = binary_tree_leaves(tree->left);
	r_leaves = binary_tree_leaves(tree->right);

	return (l_leaves + r_leaves);
}
