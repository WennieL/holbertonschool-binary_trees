# C - Binary Trees

### Requirements
#### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, 
  using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- In the following examples, the main.c files are shown as examples. 
  You can use them to test your functions, but you don't have to push 
  them to your repo (if you do we won't take them into account). 
  We will use our own main.c files at compilation. Our main.c files might 
  be different from the one shown in the examples
- The prototypes of all your functions should be included 
  in your header file called binary_trees.h
- Don't forget to push your header file
- All your header files should be include guarded

## More Info
### Data structures
##### Please use the following data structures and types for binary trees. Don't forget to include them in your header file.

### Basic Binary Tree

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```

### AVL Tree
```
typedef struct binary_tree_s avl_t;
```
### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
##### Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don't follow any kind of rule.

### Print function
###### To match the examples in the tasks, you are given [this function](https://github.com/hs-hq/0x1C.c/tree/main)

##### This function is used only for visualization purposes. You don't have to push it to your repo. It may not be used during the correction

## Tasks

### [0. New node](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/0-binary_tree_node.c)
##### Write a function that creates a binary tree node

- Prototype: ```binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); ```
- Where parent is a pointer to the parent node of the node to create
- And value is the value to put in the new node
- When created, a node does not have any child
- Your function must return a pointer to the new node, or NULL on failure

### [1. Insert left](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/1-binary_tree_insert_left.c)
##### Write a function that inserts a node as the left-child of another node

- Prototype: ```binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value); ```
- Where parent is a pointer to the node to insert the left-child in
- And value is the value to store in the new node
- Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
- If parent already has a left-child, the new node must take its place, 
  and the old left-child must be set as the left-child of the new node.

### [2. Insert right](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/2-binary_tree_insert_right.c)
##### Write a function that inserts a node as the right-child of another node

- Prototype: ```binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value); ```
- Where parent is a pointer to the node to insert the right-child in
- And value is the value to store in the new node
- Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
- If parent already has a right-child, the new node must take its place, 
  and the old right-child must be set as the right-child of the new node.

### [3. Delete](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/3-binary_tree_delete.c)
##### Write a function that deletes an entire binary tree

- Prototype: ```void binary_tree_delete(binary_tree_t *tree); ```
- Where tree is a pointer to the root node of the tree to delete
- If tree is NULL, do nothing

### [4. Is leaf](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/4-binary_tree_is_leaf.c)
##### Write a function that checks if a node is a leaf

- Prototype: ```int binary_tree_is_leaf(const binary_tree_t *node); ```
- Where node is a pointer to the node to check
- Your function must return 1 if node is a leaf, otherwise 0
- If node is NULL, return 0

### [5. Is root](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/5-binary_tree_is_root.c)
##### Write a function that checks if a given node is a root

Prototype: ```int binary_tree_is_root(const binary_tree_t *node);```
- Where node is a pointer to the node to check
- Your function must return 1 if node is a root, otherwise 0
- If node is NULL, return 0

### [6. Pre-order traversal](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/6-binary_tree_preorder.c)
##### Write a function that goes through a binary tree using pre-order traversal

- Prototype: ```void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));```
- Where tree is a pointer to the root node of the tree to traverse
- And func is a pointer to a function to call for each node. 
  The value in the node must be passed as a parameter to this function.
- If tree or func is NULL, do nothing

### [7. In-order traversal](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/7-binary_tree_inorder.c)
##### Write a function that goes through a binary tree using in-order traversal

Prototype: ```void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));```
- Where tree is a pointer to the root node of the tree to traverse
- And func is a pointer to a function to call for each node. 
  The value in the node must be passed as a parameter to this function.
- If tree or func is NULL, do nothing

### [8. Post-order traversal](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/8-binary_tree_postorder.c)
##### Write a function that goes through a binary tree using post-order traversal

- Prototype: ```void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));```
- Where tree is a pointer to the root node of the tree to traverse
- And func is a pointer to a function to call for each node. 
  The value in the node must be passed as a parameter to this function.
- If tree or func is NULL, do nothing

### [9. Height](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/9-binary_tree_height.c)
##### Write a function that measures the height of a binary tree

- Prototype: ```size_t binary_tree_height(const binary_tree_t *tree);```
- Where tree is a pointer to the root node of the tree to measure the height.
- If tree is NULL, your function must return 0

### [10. Depth](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/10-binary_tree_depth.c)
##### Write a function that measures the depth of a node in a binary tree

- Prototype: ```size_t binary_tree_depth(const binary_tree_t *tree);```
- Where tree is a pointer to the node to measure the depth
- If tree is NULL, your function must return 0

### [11. Size](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/11-binary_tree_size.c)
##### Write a function that measures the size of a binary tree

- Prototype: ```size_t binary_tree_size(const binary_tree_t *tree);```
- Where tree is a pointer to the root node of the tree to measure the size
- If tree is NULL, the function must return 0

### [12. Leaves](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/12-binary_tree_leaves.c)
##### Write a function that counts the leaves in a binary tree

- Prototype: ```size_t binary_tree_leaves(const binary_tree_t *tree);```
- Where tree is a pointer to the root node of the tree to count the number of leaves
- If tree is NULL, the function must return 0
- A NULL pointer is not a leaf

### [13. Nodes](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/13-binary_tree_nodes.c)
##### Write a function that counts the nodes with at least 1 child in a binary tree

- Prototype: ```size_t binary_tree_nodes(const binary_tree_t *tree);```
- Where tree is a pointer to the root node of the tree to count the number of nodes
- If tree is NULL, the function must return 0
- A NULL pointer is not a node

### [14. Balance factor](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/14-binary_tree_balance.c)
##### Write a function that measures the balance factor of a binary tree

- Prototype: ```int binary_tree_balance(const binary_tree_t *tree);```
- Where tree is a pointer to the root node of the tree to measure the balance factor
- If tree is NULL, return 0

### [15. Is full](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/15-binary_tree_is_full.c)
##### Write a function that checks if a binary tree is full

- Prototype: ```int binary_tree_is_full(const binary_tree_t *tree);```
- Where tree is a pointer to the root node of the tree to check
- If tree is NULL, your function must return 0

### [16. Is perfect](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/16-binary_tree_is_perfect.c)
##### Write a function that checks if a binary tree is perfect

- Prototype: ```int binary_tree_is_perfect(const binary_tree_t *tree);```
- Where tree is a pointer to the root node of the tree to check
- If tree is NULL, your function must return 0

### [17. Sibling](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/17-binary_tree_sibling.c)
##### Write a function that finds the sibling of a node

- Prototype: ```binary_tree_t *binary_tree_sibling(binary_tree_t *node);```
- Where node is a pointer to the node to find the sibling
- Your function must return a pointer to the sibling node
- If node is NULL or the parent is NULL, return NULL
- If node has no sibling, return NULL

### [18. Uncle](https://github.com/WennieL/holbertonschool-binary_trees/blob/main/18-binary_tree_uncle.c)
##### Write a function that finds the uncle of a node

- Prototype: ```binary_tree_t *binary_tree_uncle(binary_tree_t *node);```
- Where node is a pointer to the node to find the uncle
- Your function must return a pointer to the uncle node
- If node is NULL, return NULL
- If node has no uncle, return NULL
