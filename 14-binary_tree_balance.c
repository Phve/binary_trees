#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate balance factor of a binary tree.
 * @tree: Pointer to the root node of tree to calculate its balance factor.
 *
 * Return: Return 0 if the tree is NULL; otherwise, return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: Calculate tree height using root node.
 *
 * Return: If tree is empty, return 0; otherwise, return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return (left_height > right_height ? left_height : right_height);
	}
	return (0);
}
