#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree.
 * @tree: Pointer to the root node of the tree for measuring its size.
 *
 * Return: The tree's size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tr_size = 0;

	if (tree)
	{
		tr_size += 1;
		tr_size += binary_tree_size(tree->left)
		tr_size += binary_tree_size(tree->right);
	}
	return (tr_size);
}
