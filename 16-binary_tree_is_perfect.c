#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function checks if a binary tree is perfect
 * @tree: a pointter to the root node of the tree to check
 *
 * Return: (1) if a perfect tree, otherwise (0)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	{
		return (0);
	}
	else
	{
		return (binary_tree_is_perfect(tree->left) &&
			      (binary_tree_is_perfect(tree->right)));
	}
}


/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the level of a node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left_height = (1 + binary_tree_height(tree->left));
	}
	else
		left_height = 0;

	if (tree->right != NULL)
	{
		right_height = (1 + binary_tree_height(tree->right));
	}
	else
		right_height = 0;

	if (left_height > right_height)
	{
		return (left_height);
	}
	else
		return (right_height);
}
