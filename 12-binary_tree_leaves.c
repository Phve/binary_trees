#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 * @tree: Pointer to the root node of the tree for counting the number of leaves.
 *
 * Return: The count of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaf = 0;

    if (tree)
    {
        if (!tree->left && !tree->right)
            return 1;
        leaf += binary_tree_leaves(tree->left);
        leaf += binary_tree_leaves(tree->right);
    }
    return leaf;
}
