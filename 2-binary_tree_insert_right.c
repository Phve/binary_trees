#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 *                            of another node in a binary tree.
 * @parent: Pointer to the node to insert the right child.
 * @value: The value to be stored in the new node.
 *
 * Return: NULL if parent is NULL or error; otherwise, pointer to new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

new_node = binary_tree_node(parent, value);
if (new_node == NULL)
	return (NULL);
if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}
parent->right = new_node;

return (new_node);
}
