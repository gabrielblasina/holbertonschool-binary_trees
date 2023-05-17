#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * Return: 0 (if fails) leafs (if success)
 * @tree: pointer to root node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		count++;
	}
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
