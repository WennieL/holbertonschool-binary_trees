#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the eft-child
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	left_node->n = value;
	left_node->left = NULL;
	left_node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = left_node;
		left_node->left = parent->left;
	}
	parent->left = left_node;
	left_node->parent = parent;

	return (left_node);
}
