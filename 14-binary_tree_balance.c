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
