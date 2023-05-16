#include "binary_trees.h"

	int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0); /*if node is NUll, it cannot be a root */

	}

	return (node->parent == NULL) ? 1 : 0; /* return 1 if node's parent is NULL, otherwise 0 */
}
