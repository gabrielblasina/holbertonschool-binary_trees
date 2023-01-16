#include "binary_trees.h"
/**
 * binary_tree_sibling - Function to find the silbing of a node
 * Return: Pointer to the node (if success) NULL (otherwise)
 * @node: Pointer to the node to find the sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *daddy = node->parent;

	if (!node || !node->parent)
		return (NULL);
	if ((daddy->left == node) && (daddy->right))
		return (daddy->right);
	if ((daddy->right == node) && (daddy->left))
		return (daddy->left);
	else
		return (NULL);
}
