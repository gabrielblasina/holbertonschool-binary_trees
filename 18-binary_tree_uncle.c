#include "binary_trees.h"
/**
 * binary_tree_uncle - Function to find the uncle of a given node
 * Return: Pointer to the uncle (if success) NULL (otherwise)
 * @node: Pointer to the node to find the uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *daddy = node->parent;

	if (!node || !daddy || !daddy->parent)
		return (NULL);
	if ((daddy == daddy->parent->left) && (daddy->parent->right))
		return (daddy->parent->right);
	else if ((daddy == daddy->parent->right) && (daddy->parent->left))
		return (daddy->parent->left);
	else
		return (NULL);
}
