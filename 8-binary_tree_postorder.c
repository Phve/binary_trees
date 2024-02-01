#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: Pointer to the root node of the tree for traversal.
 * @func: Pointer to a function to call for each node.
 *
 * Description: No action is taken if either tree or func is NULL. 
 *              The node's value must be passed as a parameter to the function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree && func)
    {
        binary_tree_postorder(tree->left, func);
        binary_tree_postorder(tree->right, func);
        func(tree->n);
    }
}
