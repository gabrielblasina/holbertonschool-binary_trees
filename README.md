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

##### in C language, you can represent a binary tree using structures.

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

--------------------------------------------------------------------------------------------------------------

What are Trees in C?
As you know that arrays, linked lists, Stacks and Queues are linear data structures. And on the other hand, Trees are hierarchical data structures. A tree includes multiple nodes. In C, we call it a Binary Tree. A tree is referred to as a finite and non-empty set of elements in mathematical terminology.


![tree_data_structure](https://github.com/gabrielblasina/holbertonschool-binary_trees/assets/124454895/a5d73c80-cebe-43d2-a9fa-3befff0494dd)




Following are the important terms with respect to tree.

Path − Path refers to the sequence of nodes along the edges of a tree.

Root − The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

Parent − Any node except the root node has one edge upward to a node called parent.

Child − The node below a given node connected by its edge downward is called its child node.

Leaf − The node which does not have any child node is called the leaf node.

Subtree − Subtree represents the descendants of a node.

Visiting − Visiting refers to checking the value of a node when control is on the node.

Traversing − Traversing means passing through nodes in a specific order.

Levels − Level of a node represents the generation of a node. If the root node is at level 0, then its next child node is at level 1, its grandchild is at level 2, and so on.

Keys − Key represents a value of a node based on which a search operation is to be carried out for a node.

----------------------------------------------------------------------------------------------------------------
``` 
Preorder Traversal 
In this traversal, we first print the data of the current node and then move to the left subtree first and after 
that move to the right subtree. The preorder traversal of the above binary tree is 0 1 3 4 2 5 6.


Algorithm: 
 Preorder(root): 
Step:1 Print the data of the Node. 
Step:2 Move to the left side of the node(traverse left-subtree). 
Step:3 Move to the right side of the node(traverse right-subtree).


Inorder Traversal
In this traversal, we first move to the left subtree and then print the data of the node.
After printing the data of the node move to the right subtree. The inorder traversal of the above binary tree is 1 3 4 0 2 5 6.


Algorithm:  
Inorder(root): 
Step:1 Move to the left side of the node(traverse left-subtree). 
Step:2 Print the data of the Node.  
Step:3 Move to the right side of the node(traverse right-subtree).

Postorder Traversal
In this traversal, we first move to the left subtree and then move to the right subtree. 
After moving print the data of the node. The postorder traversal of the above binary tree is 1 3 4 2 5 6 0.


Algorithm: 
Postorder(root): 
Step:1 Move to the left side of the node(traverse left-subtree). 
Step:2 Move to the right side of the node(traverse right-subtree). 
Step:3 Print the data of the Node.
```
----------------------------------------------------------------------------------------------------------------


### Learning objectives for this project
- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

