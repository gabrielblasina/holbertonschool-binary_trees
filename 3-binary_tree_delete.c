#inculde "binary_tree.h"

void binary_tree_delete(binary_tree_t *tree) 
{
    if (tree == NULL) 
{
        return;
    }

    binary_tree_delete(tree->left);  
    binary_tree_delete(tree->right)

}
