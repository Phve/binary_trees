#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another.
 * @parent: Pointer to the node to insert the left child.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the created node, or NULL if parent is NULL or on failure
 *
 * Description: If parent has a left child, new node replaces it
 *              old left child becomes new node's left child.
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);

	if (new_left_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}
	
	parent->left = new_left_node;

	return (new_left_node);
}
