
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent:  is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: A pointer to the new node or NULL on failure or if parent is NULL
 *
 */
#include "binary_trees.h"


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
	}
	parent->right = newNode;


	return (newNode);
}
