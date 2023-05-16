
/**
 *binary_tree_is_root - checks if a node is root
 *@node: node to check the root conditon
 *Return: 1 if root, 0 else
 */


#include "binary_trees.h"

	int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0); /*if node is NUll, it cannot be a root */

	}

	return ((node->parent == NULL) ? 1 : 0);
	/* return 1 if node's parent is NULL, otherwise 0 */
}
