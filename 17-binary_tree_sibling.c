#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 *@node: A pointer to the node to find the sibling of.
 *
 *Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		sibling = node->parent->right;
	else
		sibling = node->parent->left;

	return (sibling);
}
