#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * Return: NULL (if fails) pointer to silbing node (if success)
 * @node: pointer to root node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *dad = node->parent;

	if (!node || !node->parent)
	{
		return (NULL);
	}
	if ((dad->left == node) && (dad->right))
	{
		return (dad->right);
	}
	if ((dad->right == node) && (dad->left))
	{
		return (dad->left);
	}
	else
		return (NULL);
}
