#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full.
 *@tree: pointer to the root node of tree.
 *
 * Return:  if tree is full;  otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
		if (tree == NULL)
			return (0);		/* If the tree is empty, it is not full.*/


		if (tree->left == NULL && tree->right == NULL)
			return (1);
	/*If the node has no children, it is full (because it is a leaf). */


		if (tree->left != NULL && tree->right != NULL)
			return (binary_tree_is_full(tree->left) &&
					 binary_tree_is_full(tree->right));
	/* If the node has exactly two children, recursively check the subtrees. */

		return (0);
}
