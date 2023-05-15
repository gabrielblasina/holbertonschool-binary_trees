
#include "binary_trees.h"


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
		new_node->right = parent->right;
	}
	parent->right = newNode;


	return (newNode);
}
