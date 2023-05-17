#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * Return: NULL (if fails) pointer to uncle node (if success)
 * @node: pointer to root node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *dad = node->parent;

	if (!node || !dad || !dad->parent)
	{
		return (NULL);
	}
	if ((dad == dad->parent->left) && (dad->parent->right))
	{
		return (dad->parent->right);
	}
	else if ((dad == dad->parent->right) && (dad->parent->left))
	{
		return (dad->parent->left);
	}
	else
		return (NULL);
}
