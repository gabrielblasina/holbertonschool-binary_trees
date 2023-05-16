
/**
 * binary_tree_delete - function for
 * deleting an entire binary tree
 * The function takes a pointer to the root node of the tree to be deleted.
 * If the tree is NULL, the function does nothing.
 *@tree: tree to delete
 *
 **/


#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
	return; /* if tree is NULL, do nothing */
}

	binary_tree_delete(tree->left); /*recursively delete the left subtree */
	binary_tree_delete(tree->right); /* recursively delete the right subtree */

	free(tree);
}
