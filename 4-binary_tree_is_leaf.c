#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to check
 *
 * description: use recursive function to check if a node is a leaf
 *
 * Return: (1) if node is a leaf, otherwise (0)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right != NULL || node->left != NULL)
	{
		binary_tree_is_leaf(node->right);
		binary_tree_is_leaf(node->left);
		return (0);
	}
	return (1);
}

