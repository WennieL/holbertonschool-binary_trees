#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - this function measures the depth of a node
 *                     in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: Depth of the node, 0 if tree is NULL or the node has no parent.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}

/* Second method with while loop */

/**
 * binary_tree_depth - this function measures the depth of a node
 *                     in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: Depth of the node, 0 if tree is NULL or the node has no parent.
 *
 * size_t binary_tree_depth(const binary_tree_t *tree)
 * {
 *       size_t depth = 0;
 *
 *       if (tree == NULL || tree->parent == NULL)
 *              return (0);
 *
 *       while (tree->parent != NULL)
 *       {
 *               depth++;
 *               tree = tree->parent;
 *       }
 *
 *       return (depth);
 *
 */
