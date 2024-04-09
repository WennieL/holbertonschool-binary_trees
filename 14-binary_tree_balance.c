#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
	
	if (tree == NULL)
		return (0);
	
	if (tree->left != NULL)
		left_height = 1 +  binary_tree_height(tree->left);
	return (0);

	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	return (0);

	return (left_height > right_height ? left_height : right_height);
}

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

	if (tree->left != NULL)
	{
		left = binary_tree_height(tree->left) + 1;
	}
	else
		left = 0 - 1;

	if (tree->right != NULL)
	{
		right = binary_tree_height(tree->right) + 1;
	}
	else
		right = 0 - 1;

	return (left - right);
}
