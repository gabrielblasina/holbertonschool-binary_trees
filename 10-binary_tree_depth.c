#include "binary_trees.h"
/**
 * binary_tree_depth - function to determine the node's depth
 * Return: Depth (if success) 0 (if fails)
 * @tree: Pointer to given node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *aux_node = tree;

	if (!tree)
		return (0);
	while (aux_node->parent)
	{
		aux_node = aux_node->parent;
		depth++;
	}
	return (depth);
}
