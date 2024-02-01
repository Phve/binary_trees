#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal,
 *                       applying a function to each nodes value.
 * @tree: Pointer to the root node of the tree to traversal.
 * @action: Pointer to a function to call to each nodes value,
 *          with the value in the node passed as a parameter.
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*action)(int))
{
	if (tree == NULL || action == NULL)
	return;

	binary_tree_inorder(tree->left, action);
	action(tree->n);
	binary_tree_inorder(tree->right, action);
}
