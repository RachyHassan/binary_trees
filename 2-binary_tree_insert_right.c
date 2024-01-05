#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right child
 * of another binary tree.
 * @parent: A pointer to the node to insert the right child.
 * @value: the value to store in the new node.
 *
 * Return: If parent is NULL - NULL
 * if error occurs - NULL
 * else, a pointer to the new node.
 *
 * Note: If parent already has a right-child,
 * the new node must take its place, and the old
 * right-child must be set as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
