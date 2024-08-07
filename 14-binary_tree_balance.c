#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;
	int balance_;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	balance_ = l_height - r_height;

	return (balance_);
}
