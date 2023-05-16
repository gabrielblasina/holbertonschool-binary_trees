#include "binary_trees.h"



void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
 {
    if (tree == NULL || func == NULL)
     {
        return;  /* If tree or func is NULL, do nothing */
    }

    /* Recursively traverse the left subtree */
    binary_tree_inorder(tree->left, func);

    /* Call func for the current node */
    func(tree->n);

    /* Recursively traverse the right subtree */
    binary_tree_inorder(tree->right, func);
}
