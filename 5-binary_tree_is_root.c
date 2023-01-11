#include "binary_trees.h"
/**
 * binary_tree_is_root - function to know if given node is root
 * Return: 1 (is a root) 0 (otherwise)
 * @node: pointer to a node
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}
