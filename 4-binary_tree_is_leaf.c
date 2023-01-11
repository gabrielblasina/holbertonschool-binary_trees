#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function to know if given node is leaf
 * Return: 1 (is a leaf) 0 (otherwise)
 * @node: pointer to a node
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if ((node->right == NULL) && (node->left == NULL))
			return (1);
	}
	return (0);
}
