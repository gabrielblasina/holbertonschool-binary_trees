#include "binary_trees.h"
/**
 * binary_tree_leaves - functionto count the number of leaves
 * Return: Number of leaves (if success) 0 (if fails)
 * @tree: Pointer to given node
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((!tree->left) && (!tree->right))
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
