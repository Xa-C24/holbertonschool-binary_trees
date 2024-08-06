#include "binary_trees.h"
/**
 * binary_tree_delete -  Deletes an entire binary tree
 * @tree: pointer to the root node of the tree to be deleted.
 *
 * Return: Void.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);		/* Recursively delete the left subtree */
	binary_tree_delete(tree->right);	/* Recursively delete the right subtree */
	free(tree);
}
