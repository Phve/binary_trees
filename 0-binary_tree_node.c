#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node for a binary tree.
 * @parent: Parent node pointer for the new node.
 * @value: Value for the new node.
 *
 * Return: Pointer to the new node, or NULL if unsuccessful.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *nw_node;

    nw_node = malloc(sizeof(binary_tree_t)); 
    if (nw_node == NULL)
    {
        return (NULL); 
    }

    nw_node->n = value;
    nw_node->parent = parent; 
    nw_node->left = NULL; 
    nw_node->right = NULL; 

    return (nw_node); 
}
