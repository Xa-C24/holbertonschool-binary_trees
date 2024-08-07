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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;
	int l_perfect;
	int r_perfect;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height != r_height)
	{
		return (0);
	}
	l_perfect = binary_tree_is_perfect(tree->left);
	r_perfect = binary_tree_is_perfect(tree->right);

	return (l_perfect && r_perfect);
}