#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - the function counts the nodes with at least
 *                     1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree
 *        to count the number of nodes
 *
 * Return: the counts of the node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
