#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node in a binary tree.
 * @tree: Pointer to the node for measuring its depth.
 *
 * Return: Return 0 if tree is NULL; otherwise, return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->parent == NULL)
        return (0);

    return (1 + binary_tree_depth(tree->parent));
}
