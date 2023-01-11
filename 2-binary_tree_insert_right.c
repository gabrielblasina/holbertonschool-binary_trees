#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to insert the right-child node
 * Return: Pointer to the created node (if success)
 * NULL (if fails or parent is NULL)
 * @parent: pointer to the parent of the inserted node
 * @value: integer value of the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_right_child;

	if (parent)
	{
		new_node = binary_tree_node(parent, value);
		if (!new_node)
			return (NULL);
		old_right_child = parent->right;
		if (old_right_child)
		{
			new_node->right = old_right_child;
			old_right_child->parent = new_node;
		}
		parent->right = new_node;
		return (new_node);
	}
	return (NULL);
}
