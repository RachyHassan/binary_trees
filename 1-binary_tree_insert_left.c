#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left child in
 * 				a node on a binary tree.
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value stored in the new node.
 *
 * Return: if parent is NULL - NULL.
 * 	   if error occurs - NULL.
 * 	   otherwise, a pointer to the new node.
 *
 * Note: If parent already has a left-child,
 * the new node must take its place, and the old left-child
 * must be set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	
	return (new);
}
