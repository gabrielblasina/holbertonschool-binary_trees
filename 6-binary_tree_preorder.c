#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
	return; /* if tree of func is NULL, o nothing */
	}



	func(tree->n);  /* Call the function for the current node of struc */

	/* recurisvely traverse the left subtree*/
	binary_tree_preorder(tree->left,func);
	/* recurisvely tracerse the rigth subtree */
	binary_tree_preorder(tree->right,func); 
}
