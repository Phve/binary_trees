#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child in a binary tree.
 * @tree: Pointer to the root node of the tree for counting nodes.
 *
 * Return: Return 0 for NULL tree; otherwise, count nodes with at least 1 child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t node_count = 0;

    if (tree)
    {
        node_count += (tree->left || tree->right) ? 1 : 0;
    
        node_count += binary_tree_nodes(tree->left);
        node_count += binary_tree_nodes(tree->right);
    }

    return (node_count);
}
