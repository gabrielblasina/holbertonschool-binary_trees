#include "binary_trees.h"
void print_node(int value);
/**
 * binary_tree_postorder - function that goes through a binary tree
 * using post-order traversal
 * Return: Void
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, print_node);
	binary_tree_postorder(tree->right, print_node);
	print_node(tree->n);
}
/**
 * print_node - Function to print node's value
 * Return: Void
 * @value: integer node's value
*/
void print_node(int value)
{
	printf("n=%d\n", value);
}
