
/**
 * binary_tree_preorder - Pre-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * This function performs a pre-order traversal of a binary tree, visiting
 * each node and calling the provided function for each node's value.
 *
 * Return: None
 */

#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
	return; /* if tree of func is NULL, o nothing */
	}



	func(tree->n);  /* Call the function for the current node of struc */

	/* recurisvely traverse the left subtree*/
	binary_tree_preorder(tree->left, func);
	/* recurisvely tracerse the rigth subtree */
	binary_tree_preorder(tree->right, func);
}
