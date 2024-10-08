#include "binary_trees.h"
/**
 * binary_tree_height - Designed to measure the height of a binary tree.
 * @tree: pointer to the root node.
 *
 * Return: The height of the tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

		if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->left);

		return ((left_height > right_height ? left_height : right_height + 1));

}
