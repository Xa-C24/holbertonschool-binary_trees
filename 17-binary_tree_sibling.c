#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 *
 * Return: Pointer to the node's sibling,
 * or NULL if no sibling or NULL node/parent.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);						/* Check if the node is NULL. */

	if (node == node->parent->left)
		return (node->parent->right);		/*If the node is the left child ofitsparent.*/
											/* The brother is the rightful child of the parent */
	else
		return (node->parent->left);	/* Otherwise, the node is the right child, ...*/
										/*... so the brother is the left child */
}
