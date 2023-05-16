#include "binary_trees.h"

	int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		retunr (0); /*if node is NUll, it cannot be a root */

	}

	return (node->psrent == NULL);
}
