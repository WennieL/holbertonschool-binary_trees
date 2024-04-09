#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: a pointer to the root node
 *        of the tree to count the number of leaves
 *
 * Return: the count of the leave of a node
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
