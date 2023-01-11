#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to insert the left-child node
 * Return: Pointer to the created node (if success)
 * NULL (if fails or parent is NULL)
 * @parent: pointer to the parent of the inserted node
 * @value: integer value of the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_left_child;

	if (parent)
	{
		new_node = binary_tree_node(parent, value);
		if (!new_node)
			return (NULL);
		old_left_child = parent->left;
		if (old_left_child)
		{
			new_node->left = old_left_child;
			old_left_child->parent = new_node;
		}

		parent->left = new_node;
		return (new_node);
	}
	return (NULL);
}
