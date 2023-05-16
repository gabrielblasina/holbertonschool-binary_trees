/**
 * binary_tree_inorder - In-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * This function performs an in-order traversal of a binary tree, visiting
 * each node and calling the provided function for each node's value.
 *
 * Return: None
 */

#include "binary_trees.h"

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
	return;  /* If tree or func is NULL, do nothing */
	}

	/* Recursively traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Call func for the current node */
	func(tree->n);

	/* Recursively traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
