/**
 * binary_tree_insert_left - Inserts a node as the letft-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to put in the new node
 *
 * Return: A pointer to the new node or NULL on error
 */

#include "binary_trees.h"

	binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
	return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}
	parent->left = newNode;

	return (newNode);
}

