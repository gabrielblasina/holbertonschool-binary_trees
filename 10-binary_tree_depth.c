/**
 *binary_tree_depth - measures the deep of a node
 *@tree: pointer to the node to measure the depth
 *Return: the depth of a node
 */

#include "binary_trees.h"



size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 0;
	const binary_tree_t *current;

	if (!tree)
		return (0);

	current = tree;

	while (current->parent)
	{
		deep++;
		current = current->parent;
	}

	return (deep);
}
