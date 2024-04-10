#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 *
 * @node: a pointer to the node to find the uncle
 *
 * Return: the uncle node of a node
 *
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || (node->parent == NULL) || (node->parent->parent == NULL))
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
	{
		return (grandparent->right);
	}
	else
	{
		return (grandparent->left);
	}
}

/* Original method */

/**
 * binary_tree_t *binary_tree_uncle(binary_tree_t *node)
 * {
 *       if (node == NULL)
 *             return (NULL);
 *
 *       if (node->parent == NULL || node->parent->parent == NULL)
 *              return (NULL);
 *
 *       if (node->parent->parent->left == node->parent)
 *       	 return (node->parent->parent->right);
 *	 else 
 *       	 return (node->parent->parent->left);
 * }
 */
