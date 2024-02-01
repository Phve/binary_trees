#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree completely.
 * @tree: Pointer to the root node of the tree for deletion.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
}
