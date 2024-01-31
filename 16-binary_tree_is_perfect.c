#include "binary_trees.h"

/**
 * is_perfect_recursive - Check if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect, the height of the tree, otherwise, 0.
 */
int is_perfect_recursive(const binary_tree_t *tree)
{
    int left_height = 0, right_height = 0;

    if (tree->left && tree->right)
    {
        left_height = 1 + is_perfect_recursive(tree->left);
        right_height = 1 + is_perfect_recursive(tree->right);

        if (left_height == right_height && left_height != 0 && right_height != 0)
            return left_height;
        return 0;
    }
    else if (!tree->left && !tree->right)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to root node of the tree to check.
 *
 * Return: If tree is NULL or not perfect, 0.
 *         Otherwise, the height of the tree.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    return is_perfect_recursive(tree);
}
