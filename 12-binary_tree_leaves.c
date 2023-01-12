#include "binary_trees.h"
/**
 * binary_trees_leaves - functionto count the number of leaves
 * Return: Number of leaves (if success) 0 (if fails)
 * @tree: Pointer to given node
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (2);
	else
		return (1);

}
