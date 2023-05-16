#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)

	return (0);  /* If tree is NULL, return height 0 */
	}

	size_t left_height = binary_tree_height(tree->left);
	/* Calculate the height of the left subtree */
	size_t right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
{
	return (left_height + 1);
	/* Return the maximum height between the left and right subtrees,*/
	/* plus 1 for the current node */
}
	else
	{
	return (right_height + 1);
	}
}


}
