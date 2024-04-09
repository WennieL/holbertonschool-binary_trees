#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance
 *                       factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor of a node
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		if (tree->left != NULL)
			left = binary_tree_balance(tree->left) + 1;

		if (tree->right != NULL)
			right = binary_tree_balance(tree->right) + 1;
	
	} else
		return (1);

	return (left - right);
}
