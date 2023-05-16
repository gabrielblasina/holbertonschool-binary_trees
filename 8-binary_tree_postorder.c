/**
 * binary_tree_postorder - Performs a post-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * This function performs a post-order traversal of a binary tree, visiting
 * each node after visiting its left and right subtrees. The function calls
 * the provided function pointer for each visited node, passing the value
 * of the node as a parameter.
 *
 * Return: None
 */

#include "binary_trees.h"


	void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
	return;
	}

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
