#include "binary_trees.h"
/**
 * binary_tree_inorder - performs a fixed path
 * @tree: pointer to the node root of the tree.
 * @func: pointer to the fonction.
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;							 /* Base case: if tree is NULL or func is NULL, return */

	binary_tree_inorder(tree->left, func);
	func(tree->n);						 /* Recursively traverse the left subtree */

	binary_tree_inorder(tree->right, func);
	/* Recursively traverse the right subtree */
}
