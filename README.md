# Binary Trees

A binary tree is a data structure in which each node has at most two children: a left child and a right child.
 Each node is connected to its children by links called "left links" and "right links". These links represent the hierarchy relationship between the nodes.

In a binary tree, the node at the top is called the "root". From the root, we can traverse the tree by following the left and right links to access the other nodes. 
Each node can have subtrees that are also binary trees.

     1
       / \
      2   3
     / \
    4   

In this case, the root node has the value 1. It has a left child with value 2 and a right child with value 3.

in C language, you can represent a binary tree using structures.

```
struct Node
 {
    int value;
    struct Node* left;
    struct Node* right;
};
```



The following algorithm shows the insert operation in binary search tree:

Step 1: Create a new node with a value and set its left and right to NULL.

Step 2: Check whether the tree is empty or not.

Step 3: If the tree is empty, set the root to a new node.

Step 4: If the tree is not empty, check whether a value of new node is smaller or larger than the node (here it is a root node).

Step 5: If a new node is smaller than or equal to the node, move to its left child.

Step 6: If a new node is larger than the node, move to its right child.

Step 7: Repeat the process until we reach to a leaf node.


/* site under construction */

